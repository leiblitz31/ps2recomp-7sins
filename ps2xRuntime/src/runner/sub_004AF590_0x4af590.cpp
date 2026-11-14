#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AF590
// Address: 0x4af590 - 0x4af6f8
void sub_004AF590_0x4af590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF590_0x4af590");
#endif

    switch (ctx->pc) {
        case 0x4af5d4u: goto label_4af5d4;
        case 0x4af5e0u: goto label_4af5e0;
        case 0x4af5f4u: goto label_4af5f4;
        case 0x4af678u: goto label_4af678;
        case 0x4af6c8u: goto label_4af6c8;
        default: break;
    }

    ctx->pc = 0x4af590u;

    // 0x4af590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4af590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4af594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4af594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af598: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4af598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4af59c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4af59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4af5a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4af5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4af5a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4af5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af5a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4af5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4af5ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4af5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4af5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4af5b4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x4af5b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4af5b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4af5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af5bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4af5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4af5c0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4AF5C0u;
    {
        const bool branch_taken_0x4af5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF5C0u;
        // 0x4af5c4: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af5c0) {
            ctx->pc = 0x4AF600u;
            goto label_4af600;
        }
    }
    ctx->pc = 0x4AF5C8u;
    // 0x4af5c8: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x4af5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4af5cc: 0xc0bc244  jal         func_2F0910
    ctx->pc = 0x4AF5CCu;
    SET_GPR_U32(ctx, 31, 0x4AF5D4u);
    ctx->pc = 0x4AF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5CCu;
    // 0x4af5d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0910u, 0x4AF5CCu, 0x4AF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5D4u;
label_4af5d4:
    // 0x4af5d4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x4af5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4af5d8: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4AF5D8u;
    SET_GPR_U32(ctx, 31, 0x4AF5E0u);
    ctx->pc = 0x4AF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5D8u;
    // 0x4af5dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4AF5D8u, 0x4AF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5E0u;
label_4af5e0:
    // 0x4af5e0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x4af5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x4af5e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4af5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4af5e8: 0x28280  sll         $s0, $v0, 10
    ctx->pc = 0x4af5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x4af5ec: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4AF5ECu;
    SET_GPR_U32(ctx, 31, 0x4AF5F4u);
    ctx->pc = 0x4AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5ECu;
    // 0x4af5f0: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4AF5ECu, 0x4AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5F4u;
label_4af5f4:
    // 0x4af5f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4af5f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4af5f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF5F8u;
    {
        const bool branch_taken_0x4af5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF5F8u;
        // 0x4af5fc: 0xae3001c4  sw          $s0, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af5f8) {
            ctx->pc = 0x4AF608u;
            goto label_4af608;
        }
    }
    ctx->pc = 0x4AF600u;
label_4af600:
    // 0x4af600: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4af600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4af604: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x4af604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_4af608:
    // 0x4af608: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4af608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4af60c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4af610: 0xae2301b8  sw          $v1, 0x1B8($s1)
    ctx->pc = 0x4af610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 3));
    // 0x4af614: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4af614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af618: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4af618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4af61c: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x4af61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
    // 0x4af620: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4af620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af624: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4af624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4af628: 0xae2301c8  sw          $v1, 0x1C8($s1)
    ctx->pc = 0x4af628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 3));
    // 0x4af62c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4af62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af630: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x4af630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af634: 0x50c40014  beql        $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AF634u;
    {
        const bool branch_taken_0x4af634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x4af634) {
            ctx->pc = 0x4AF638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF634u;
            // 0x4af638: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF688u;
            goto label_4af688;
        }
    }
    ctx->pc = 0x4AF63Cu;
    // 0x4af63c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x4af63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4af640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF640u;
    {
        const bool branch_taken_0x4af640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF640u;
        // 0x4af644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af640) {
            ctx->pc = 0x4AF658u;
            goto label_4af658;
        }
    }
    ctx->pc = 0x4AF648u;
    // 0x4af648: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AF648u;
    {
        const bool branch_taken_0x4af648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF648u;
        // 0x4af64c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af648) {
            ctx->pc = 0x4AF66Cu;
            goto label_4af66c;
        }
    }
    ctx->pc = 0x4AF650u;
    // 0x4af650: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4AF650u;
    {
        const bool branch_taken_0x4af650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af650) {
            ctx->pc = 0x4AF6C0u;
            goto label_4af6c0;
        }
    }
    ctx->pc = 0x4AF658u;
label_4af658:
    // 0x4af658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4af658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4af65c: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4AF65Cu;
    {
        const bool branch_taken_0x4af65c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF65Cu;
        // 0x4af660: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af65c) {
            ctx->pc = 0x4AF6B4u;
            goto label_4af6b4;
        }
    }
    ctx->pc = 0x4AF664u;
    // 0x4af664: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4AF664u;
    {
        const bool branch_taken_0x4af664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af664) {
            ctx->pc = 0x4AF6C0u;
            goto label_4af6c0;
        }
    }
    ctx->pc = 0x4AF66Cu;
label_4af66c:
    // 0x4af66c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4af66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af670: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4AF670u;
    SET_GPR_U32(ctx, 31, 0x4AF678u);
    ctx->pc = 0x4AF674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF670u;
    // 0x4af674: 0x262401cc  addiu       $a0, $s1, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4AF670u, 0x4AF678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF678u;
label_4af678:
    // 0x4af678: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x4af678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4af67c: 0x246301cc  addiu       $v1, $v1, 0x1CC
    ctx->pc = 0x4af67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 460));
    // 0x4af680: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AF680u;
    {
        const bool branch_taken_0x4af680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF680u;
        // 0x4af684: 0xae2301bc  sw          $v1, 0x1BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af680) {
            ctx->pc = 0x4AF6BCu;
            goto label_4af6bc;
        }
    }
    ctx->pc = 0x4AF688u;
label_4af688:
    // 0x4af688: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4af688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4af68c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4af68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4af690: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x4af690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4af694: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x4af694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4af698: 0xb2420293  sdl         $v0, 0x293($s2)
    ctx->pc = 0x4af698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 659); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af69c: 0xb642028c  sdr         $v0, 0x28C($s2)
    ctx->pc = 0x4af69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 652); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af6a0: 0xb244029b  sdl         $a0, 0x29B($s2)
    ctx->pc = 0x4af6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af6a4: 0xb6440294  sdr         $a0, 0x294($s2)
    ctx->pc = 0x4af6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af6a8: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4af6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4af6ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AF6ACu;
    {
        const bool branch_taken_0x4af6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF6ACu;
        // 0x4af6b0: 0x2442024c  addiu       $v0, $v0, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af6ac) {
            ctx->pc = 0x4AF6B8u;
            goto label_4af6b8;
        }
    }
    ctx->pc = 0x4AF6B4u;
label_4af6b4:
    // 0x4af6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4af6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4af6b8:
    // 0x4af6b8: 0xae2201bc  sw          $v0, 0x1BC($s1)
    ctx->pc = 0x4af6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
label_4af6bc:
    // 0x4af6bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4af6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4af6c0:
    // 0x4af6c0: 0xc12d182  jal         func_4B4608
    ctx->pc = 0x4AF6C0u;
    SET_GPR_U32(ctx, 31, 0x4AF6C8u);
    ctx->pc = 0x4AF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF6C0u;
    // 0x4af6c4: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4608u, 0x4AF6C0u, 0x4AF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF6C8u;
label_4af6c8:
    // 0x4af6c8: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4af6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4af6cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4af6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4af6d0: 0x244201b4  addiu       $v0, $v0, 0x1B4
    ctx->pc = 0x4af6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x4af6d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4af6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af6d8: 0xae4202cc  sw          $v0, 0x2CC($s2)
    ctx->pc = 0x4af6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 716), GPR_U32(ctx, 2));
    // 0x4af6dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4af6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af6e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4af6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4af6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af6e8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x4af6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4af6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF6ECu;
        // 0x4af6f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF6F4u;
    // 0x4af6f4: 0x0  nop
    ctx->pc = 0x4af6f4u;
    // NOP
    ctx->pc = 0x4af6f8u;
}
