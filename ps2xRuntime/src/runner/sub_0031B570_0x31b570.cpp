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

// Function: sub_0031B570
// Address: 0x31b570 - 0x31b7b8
void sub_0031B570_0x31b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B570_0x31b570");
#endif

    switch (ctx->pc) {
        case 0x31b5f0u: goto label_31b5f0;
        case 0x31b624u: goto label_31b624;
        case 0x31b634u: goto label_31b634;
        case 0x31b670u: goto label_31b670;
        case 0x31b714u: goto label_31b714;
        case 0x31b748u: goto label_31b748;
        case 0x31b758u: goto label_31b758;
        case 0x31b794u: goto label_31b794;
        default: break;
    }

    ctx->pc = 0x31b570u;

    // 0x31b570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31b574: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b578: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31b57c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31b580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b584: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31b588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b58c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31b590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31b590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b598: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31b59c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31B59Cu;
    {
        const bool branch_taken_0x31b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B59Cu;
        // 0x31b5a0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b59c) {
            ctx->pc = 0x31B5F8u;
            goto label_31b5f8;
        }
    }
    ctx->pc = 0x31B5A4u;
    // 0x31b5a4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x31b5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31b5a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B5A8u;
    {
        const bool branch_taken_0x31b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5A8u;
        // 0x31b5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5a8) {
            ctx->pc = 0x31B5C0u;
            goto label_31b5c0;
        }
    }
    ctx->pc = 0x31B5B0u;
    // 0x31b5b0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B5B0u;
    {
        const bool branch_taken_0x31b5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5B0u;
        // 0x31b5b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5b0) {
            ctx->pc = 0x31B5DCu;
            goto label_31b5dc;
        }
    }
    ctx->pc = 0x31B5B8u;
    // 0x31b5b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31B5B8u;
    {
        const bool branch_taken_0x31b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5B8u;
        // 0x31b5bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5b8) {
            ctx->pc = 0x31B678u;
            goto label_31b678;
        }
    }
    ctx->pc = 0x31B5C0u;
label_31b5c0:
    // 0x31b5c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b5c4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31B5C4u;
    {
        const bool branch_taken_0x31b5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5C4u;
        // 0x31b5c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5c4) {
            ctx->pc = 0x31B610u;
            goto label_31b610;
        }
    }
    ctx->pc = 0x31B5CCu;
    // 0x31b5cc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31B5CCu;
    {
        const bool branch_taken_0x31b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5CCu;
        // 0x31b5d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5cc) {
            ctx->pc = 0x31B62Cu;
            goto label_31b62c;
        }
    }
    ctx->pc = 0x31B5D4u;
    // 0x31b5d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31B5D4u;
    {
        const bool branch_taken_0x31b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5D4u;
        // 0x31b5d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5d4) {
            ctx->pc = 0x31B678u;
            goto label_31b678;
        }
    }
    ctx->pc = 0x31B5DCu;
label_31b5dc:
    // 0x31b5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31b5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e8: 0xc0c59aa  jal         func_3166A8
    ctx->pc = 0x31B5E8u;
    SET_GPR_U32(ctx, 31, 0x31B5F0u);
    ctx->pc = 0x31B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5E8u;
    // 0x31b5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3166A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3166A8u, 0x31B5E8u, 0x31B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5F0u;
label_31b5f0:
    // 0x31b5f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31B5F0u;
    {
        const bool branch_taken_0x31b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5F0u;
        // 0x31b5f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5f0) {
            ctx->pc = 0x31B674u;
            goto label_31b674;
        }
    }
    ctx->pc = 0x31B5F8u;
label_31b5f8:
    // 0x31b5f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b600: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b608: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31B608u;
    {
        const bool branch_taken_0x31b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B608u;
        // 0x31b60c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b608) {
            ctx->pc = 0x31B668u;
            goto label_31b668;
        }
    }
    ctx->pc = 0x31B610u;
label_31b610:
    // 0x31b610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b614: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31b614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b618: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b61c: 0xc0c5c48  jal         func_317120
    ctx->pc = 0x31B61Cu;
    SET_GPR_U32(ctx, 31, 0x31B624u);
    ctx->pc = 0x31B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B61Cu;
    // 0x31b620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317120u, 0x31B61Cu, 0x31B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B624u;
label_31b624:
    // 0x31b624: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31B624u;
    {
        const bool branch_taken_0x31b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B624u;
        // 0x31b628: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b624) {
            ctx->pc = 0x31B674u;
            goto label_31b674;
        }
    }
    ctx->pc = 0x31B62Cu;
label_31b62c:
    // 0x31b62c: 0xc0e2048  jal         func_388120
    ctx->pc = 0x31B62Cu;
    SET_GPR_U32(ctx, 31, 0x31B634u);
    ctx->pc = 0x31B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B62Cu;
    // 0x31b630: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x31B62Cu, 0x31B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B634u;
label_31b634:
    // 0x31b634: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x31b634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31b638: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x31b638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31b63c: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x31b63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31b640: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x31b640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31b644: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x31b644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b648: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x31b648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b64c: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x31b64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b650: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31b650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b654: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x31b654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b658: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b65c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31b664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b668:
    // 0x31b668: 0xc0c5e36  jal         func_3178D8
    ctx->pc = 0x31B668u;
    SET_GPR_U32(ctx, 31, 0x31B670u);
    ctx->pc = 0x3178D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3178D8u, 0x31B668u, 0x31B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B670u;
label_31b670:
    // 0x31b670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31b670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b674:
    // 0x31b674: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31b674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31b678:
    // 0x31b678: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31b678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b67c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31b67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b680: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31b680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b688: 0x3e00008  jr          $ra
    ctx->pc = 0x31B688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B688u;
        // 0x31b68c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B690u;
    // 0x31b690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31b694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b698: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31b698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31b69c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31b6a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31b6a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31b6b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31b6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b6b8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31b6bc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31B6BCu;
    {
        const bool branch_taken_0x31b6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6BCu;
        // 0x31b6c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6bc) {
            ctx->pc = 0x31B71Cu;
            goto label_31b71c;
        }
    }
    ctx->pc = 0x31B6C4u;
    // 0x31b6c4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x31b6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31b6c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B6C8u;
    {
        const bool branch_taken_0x31b6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6C8u;
        // 0x31b6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6c8) {
            ctx->pc = 0x31B6E0u;
            goto label_31b6e0;
        }
    }
    ctx->pc = 0x31B6D0u;
    // 0x31b6d0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B6D0u;
    {
        const bool branch_taken_0x31b6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6D0u;
        // 0x31b6d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6d0) {
            ctx->pc = 0x31B6FCu;
            goto label_31b6fc;
        }
    }
    ctx->pc = 0x31B6D8u;
    // 0x31b6d8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x31B6D8u;
    {
        const bool branch_taken_0x31b6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6D8u;
        // 0x31b6dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6d8) {
            ctx->pc = 0x31B79Cu;
            goto label_31b79c;
        }
    }
    ctx->pc = 0x31B6E0u;
label_31b6e0:
    // 0x31b6e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b6e4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31B6E4u;
    {
        const bool branch_taken_0x31b6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6E4u;
        // 0x31b6e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6e4) {
            ctx->pc = 0x31B734u;
            goto label_31b734;
        }
    }
    ctx->pc = 0x31B6ECu;
    // 0x31b6ec: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31B6ECu;
    {
        const bool branch_taken_0x31b6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6ECu;
        // 0x31b6f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6ec) {
            ctx->pc = 0x31B750u;
            goto label_31b750;
        }
    }
    ctx->pc = 0x31B6F4u;
    // 0x31b6f4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31B6F4u;
    {
        const bool branch_taken_0x31b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6F4u;
        // 0x31b6f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6f4) {
            ctx->pc = 0x31B79Cu;
            goto label_31b79c;
        }
    }
    ctx->pc = 0x31B6FCu;
label_31b6fc:
    // 0x31b6fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b700: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b704: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b70c: 0xc0c6260  jal         func_318980
    ctx->pc = 0x31B70Cu;
    SET_GPR_U32(ctx, 31, 0x31B714u);
    ctx->pc = 0x31B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B70Cu;
    // 0x31b710: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318980u, 0x31B70Cu, 0x31B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B714u;
label_31b714:
    // 0x31b714: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31B714u;
    {
        const bool branch_taken_0x31b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B714u;
        // 0x31b718: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b714) {
            ctx->pc = 0x31B798u;
            goto label_31b798;
        }
    }
    ctx->pc = 0x31B71Cu;
label_31b71c:
    // 0x31b71c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b720: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b724: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b72c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31B72Cu;
    {
        const bool branch_taken_0x31b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B72Cu;
        // 0x31b730: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b72c) {
            ctx->pc = 0x31B78Cu;
            goto label_31b78c;
        }
    }
    ctx->pc = 0x31B734u;
label_31b734:
    // 0x31b734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b738: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31b738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b73c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b740: 0xc0c6538  jal         func_3194E0
    ctx->pc = 0x31B740u;
    SET_GPR_U32(ctx, 31, 0x31B748u);
    ctx->pc = 0x31B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B740u;
    // 0x31b744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194E0u, 0x31B740u, 0x31B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B748u;
label_31b748:
    // 0x31b748: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31B748u;
    {
        const bool branch_taken_0x31b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B748u;
        // 0x31b74c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b748) {
            ctx->pc = 0x31B798u;
            goto label_31b798;
        }
    }
    ctx->pc = 0x31B750u;
label_31b750:
    // 0x31b750: 0xc0e2048  jal         func_388120
    ctx->pc = 0x31B750u;
    SET_GPR_U32(ctx, 31, 0x31B758u);
    ctx->pc = 0x31B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B750u;
    // 0x31b754: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x31B750u, 0x31B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B758u;
label_31b758:
    // 0x31b758: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x31b758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31b75c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x31b75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31b760: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x31b760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31b764: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x31b764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31b768: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x31b768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b76c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x31b76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b770: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x31b770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31b774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b778: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x31b778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b77c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b780: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b788: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31b788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b78c:
    // 0x31b78c: 0xc0c66d0  jal         func_319B40
    ctx->pc = 0x31B78Cu;
    SET_GPR_U32(ctx, 31, 0x31B794u);
    ctx->pc = 0x319B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319B40u, 0x31B78Cu, 0x31B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B794u;
label_31b794:
    // 0x31b794: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31b794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b798:
    // 0x31b798: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31b798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31b79c:
    // 0x31b79c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31b79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b7a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31b7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b7a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31b7a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7ACu;
        // 0x31b7b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B7B4u;
    // 0x31b7b4: 0x0  nop
    ctx->pc = 0x31b7b4u;
    // NOP
    ctx->pc = 0x31b7b8u;
}
