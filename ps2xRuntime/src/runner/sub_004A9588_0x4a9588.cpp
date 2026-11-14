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

// Function: sub_004A9588
// Address: 0x4a9588 - 0x4a98e8
void sub_004A9588_0x4a9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9588_0x4a9588");
#endif

    switch (ctx->pc) {
        case 0x4a95bcu: goto label_4a95bc;
        case 0x4a9600u: goto label_4a9600;
        case 0x4a9634u: goto label_4a9634;
        case 0x4a9664u: goto label_4a9664;
        case 0x4a967cu: goto label_4a967c;
        case 0x4a9690u: goto label_4a9690;
        case 0x4a96ccu: goto label_4a96cc;
        case 0x4a9748u: goto label_4a9748;
        case 0x4a9774u: goto label_4a9774;
        case 0x4a97a0u: goto label_4a97a0;
        case 0x4a97c0u: goto label_4a97c0;
        case 0x4a97d4u: goto label_4a97d4;
        case 0x4a97e8u: goto label_4a97e8;
        case 0x4a9804u: goto label_4a9804;
        case 0x4a9828u: goto label_4a9828;
        case 0x4a983cu: goto label_4a983c;
        case 0x4a9850u: goto label_4a9850;
        case 0x4a9864u: goto label_4a9864;
        case 0x4a9878u: goto label_4a9878;
        case 0x4a988cu: goto label_4a988c;
        case 0x4a98a0u: goto label_4a98a0;
        case 0x4a98b4u: goto label_4a98b4;
        default: break;
    }

    ctx->pc = 0x4a9588u;

    // 0x4a9588: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a958c: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4a958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x4a9590: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a9594: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a9594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a9598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a959c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4a95a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a95a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4a95a4: 0x108000c7  beqz        $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x4A95A4u;
    {
        const bool branch_taken_0x4a95a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A95A4u;
        // 0x4a95a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95a4) {
            ctx->pc = 0x4A98C4u;
            goto label_4a98c4;
        }
    }
    ctx->pc = 0x4A95ACu;
    // 0x4a95ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a95acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a95b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a95b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a95b4: 0xc1264fa  jal         func_4993E8
    ctx->pc = 0x4A95B4u;
    SET_GPR_U32(ctx, 31, 0x4A95BCu);
    ctx->pc = 0x4A95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A95B4u;
    // 0x4a95b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4993E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4993E8u, 0x4A95B4u, 0x4A95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A95BCu;
label_4a95bc:
    // 0x4a95bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a95bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a95c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A95C0u;
    {
        const bool branch_taken_0x4a95c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A95C0u;
        // 0x4a95c4: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95c0) {
            ctx->pc = 0x4A95F0u;
            goto label_4a95f0;
        }
    }
    ctx->pc = 0x4A95C8u;
    // 0x4a95c8: 0x244760e0  addiu       $a3, $v0, 0x60E0
    ctx->pc = 0x4a95c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
    // 0x4a95cc: 0x68640047  ldl         $a0, 0x47($v1)
    ctx->pc = 0x4a95ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a95d0: 0x6c640040  ldr         $a0, 0x40($v1)
    ctx->pc = 0x4a95d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a95d4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x4a95d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x4a95d8: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x4a95d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a95dc: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x4a95dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a95e0: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x4a95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x4a95e4: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x4a95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a95e8: 0xe780b888  swc1        $f0, -0x4778($gp)
    ctx->pc = 0x4a95e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949000), bits); }
    // 0x4a95ec: 0x0  nop
    ctx->pc = 0x4a95ecu;
    // NOP
label_4a95f0:
    // 0x4a95f0: 0x8f90c200  lw          $s0, -0x3E00($gp)
    ctx->pc = 0x4a95f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
    // 0x4a95f4: 0x2794c200  addiu       $s4, $gp, -0x3E00
    ctx->pc = 0x4a95f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
    // 0x4a95f8: 0x121400b2  beq         $s0, $s4, . + 4 + (0xB2 << 2)
    ctx->pc = 0x4A95F8u;
    {
        const bool branch_taken_0x4a95f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x4A95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A95F8u;
        // 0x4a95fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a95f8) {
            ctx->pc = 0x4A98C4u;
            goto label_4a98c4;
        }
    }
    ctx->pc = 0x4A9600u;
label_4a9600:
    // 0x4a9600: 0x8f82b884  lw          $v0, -0x477C($gp)
    ctx->pc = 0x4a9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x4a9604: 0x8f83b87c  lw          $v1, -0x4784($gp)
    ctx->pc = 0x4a9604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
    // 0x4a9608: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4a9608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a960c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9610: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4a9610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a9614: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x4A9614u;
    {
        const bool branch_taken_0x4a9614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9614u;
        // 0x4a9618: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9614) {
            ctx->pc = 0x4A9784u;
            goto label_4a9784;
        }
    }
    ctx->pc = 0x4A961Cu;
    // 0x4a961c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9620: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x4a9620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x4a9624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9624u;
    {
        const bool branch_taken_0x4a9624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9624) {
            ctx->pc = 0x4A963Cu;
            goto label_4a963c;
        }
    }
    ctx->pc = 0x4A962Cu;
    // 0x4a962c: 0xc12a8f4  jal         func_4AA3D0
    ctx->pc = 0x4A962Cu;
    SET_GPR_U32(ctx, 31, 0x4A9634u);
    ctx->pc = 0x4A9630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A962Cu;
    // 0x4a9630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA3D0u, 0x4A962Cu, 0x4A9634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9634u;
label_4a9634:
    // 0x4a9634: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4A9634u;
    {
        const bool branch_taken_0x4a9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9634u;
        // 0x4a9638: 0xde020008  ld          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9634) {
            ctx->pc = 0x4A96A0u;
            goto label_4a96a0;
        }
    }
    ctx->pc = 0x4A963Cu;
label_4a963c:
    // 0x4a963c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A963Cu;
    {
        const bool branch_taken_0x4a963c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A963Cu;
        // 0x4a9640: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a963c) {
            ctx->pc = 0x4A969Cu;
            goto label_4a969c;
        }
    }
    ctx->pc = 0x4A9644u;
    // 0x4a9644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9644u;
    {
        const bool branch_taken_0x4a9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9644u;
        // 0x4a9648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9644) {
            ctx->pc = 0x4A9654u;
            goto label_4a9654;
        }
    }
    ctx->pc = 0x4A964Cu;
    // 0x4a964c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A964Cu;
    {
        const bool branch_taken_0x4a964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A964Cu;
        // 0x4a9650: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a964c) {
            ctx->pc = 0x4A9664u;
            goto label_4a9664;
        }
    }
    ctx->pc = 0x4A9654u;
label_4a9654:
    // 0x4a9654: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a9654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a9658: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a9658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a965c: 0xc126482  jal         func_499208
    ctx->pc = 0x4A965Cu;
    SET_GPR_U32(ctx, 31, 0x4A9664u);
    ctx->pc = 0x4A9660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A965Cu;
    // 0x4a9660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x4A965Cu, 0x4A9664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9664u;
label_4a9664:
    // 0x4a9664: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4a9664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x4a9668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a966c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4a966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a9670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9674: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4A9674u;
    SET_GPR_U32(ctx, 31, 0x4A967Cu);
    ctx->pc = 0x4A9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9674u;
    // 0x4a9678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4A9674u, 0x4A967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A967Cu;
label_4a967c:
    // 0x4a967c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9680: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4a9680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4a9684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9688: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4A9688u;
    SET_GPR_U32(ctx, 31, 0x4A9690u);
    ctx->pc = 0x4A968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9688u;
    // 0x4a968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4A9688u, 0x4A9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9690u;
label_4a9690:
    // 0x4a9690: 0x8f83b88c  lw          $v1, -0x4774($gp)
    ctx->pc = 0x4a9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
    // 0x4a9694: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4a9694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4a9698: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4a9698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4a969c:
    // 0x4a969c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x4a969cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_4a96a0:
    // 0x4a96a0: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x4a96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x4a96a4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x4a96a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x4a96a8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x4a96a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a96ac: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x4a96acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x4a96b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a96b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a96b4: 0x54440080  bnel        $v0, $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x4A96B4u;
    {
        const bool branch_taken_0x4a96b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a96b4) {
            ctx->pc = 0x4A96B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A96B4u;
            // 0x4a96b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A98B8u;
            goto label_4a98b8;
        }
    }
    ctx->pc = 0x4A96BCu;
    // 0x4a96bc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x4a96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a96c0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x4a96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a96c4: 0xc12978a  jal         func_4A5E28
    ctx->pc = 0x4A96C4u;
    SET_GPR_U32(ctx, 31, 0x4A96CCu);
    ctx->pc = 0x4A96C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A96C4u;
    // 0x4a96c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5E28u, 0x4A96C4u, 0x4A96CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A96CCu;
label_4a96cc:
    // 0x4a96cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a96ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a96d0: 0x8f83b88c  lw          $v1, -0x4774($gp)
    ctx->pc = 0x4a96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
    // 0x4a96d4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4a96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4a96d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4a96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a96dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A96DCu;
    {
        const bool branch_taken_0x4a96dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A96DCu;
        // 0x4a96e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a96dc) {
            ctx->pc = 0x4A96F4u;
            goto label_4a96f4;
        }
    }
    ctx->pc = 0x4A96E4u;
    // 0x4a96e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a96e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a96e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a96e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a96ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A96ECu;
    {
        const bool branch_taken_0x4a96ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A96ECu;
        // 0x4a96f0: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a96ec) {
            ctx->pc = 0x4A970Cu;
            goto label_4a970c;
        }
    }
    ctx->pc = 0x4A96F4u;
label_4a96f4:
    // 0x4a96f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a96f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a96f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a96f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a96fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a96fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a9700: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a9700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a9704: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4a9704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x4a9708: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4a9708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a970c:
    // 0x4a970c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x4a970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x4a9710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a9710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a9714: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4a9714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4a9718: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4a9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a971c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4a971cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4a9720: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a9720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a9724: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a9724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a9728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a972c: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x4a972cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4a9730: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A9730u;
    {
        const bool branch_taken_0x4a9730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9730u;
        // 0x4a9734: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9730) {
            ctx->pc = 0x4A9778u;
            goto label_4a9778;
        }
    }
    ctx->pc = 0x4A9738u;
    // 0x4a9738: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a973c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4a973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4a9740: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A9740u;
    {
        const bool branch_taken_0x4a9740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9740) {
            ctx->pc = 0x4A976Cu;
            goto label_4a976c;
        }
    }
    ctx->pc = 0x4A9748u;
label_4a9748:
    // 0x4a9748: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4a9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a974c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a9750: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x4a9750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4a9754: 0x0  nop
    ctx->pc = 0x4a9754u;
    // NOP
    // 0x4a9758: 0x0  nop
    ctx->pc = 0x4a9758u;
    // NOP
    // 0x4a975c: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A975Cu;
    {
        const bool branch_taken_0x4a975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A975Cu;
        // 0x4a9760: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a975c) {
            ctx->pc = 0x4A9748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9748;
        }
    }
    ctx->pc = 0x4A9764u;
    // 0x4a9764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9764u;
    {
        const bool branch_taken_0x4a9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9764u;
        // 0x4a9768: 0x8f82b88c  lw          $v0, -0x4774($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9764) {
            ctx->pc = 0x4A977Cu;
            goto label_4a977c;
        }
    }
    ctx->pc = 0x4A976Cu;
label_4a976c:
    // 0x4a976c: 0xc12a8f4  jal         func_4AA3D0
    ctx->pc = 0x4A976Cu;
    SET_GPR_U32(ctx, 31, 0x4A9774u);
    ctx->pc = 0x4A9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A976Cu;
    // 0x4a9770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA3D0u, 0x4A976Cu, 0x4A9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9774u;
label_4a9774:
    // 0x4a9774: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4a9774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4a9778:
    // 0x4a9778: 0x8f82b88c  lw          $v0, -0x4774($gp)
    ctx->pc = 0x4a9778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
label_4a977c:
    // 0x4a977c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x4A977Cu;
    {
        const bool branch_taken_0x4a977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A977Cu;
        // 0x4a9780: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a977c) {
            ctx->pc = 0x4A98B4u;
            goto label_4a98b4;
        }
    }
    ctx->pc = 0x4A9784u;
label_4a9784:
    // 0x4a9784: 0x5620004c  bnel        $s1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x4A9784u;
    {
        const bool branch_taken_0x4a9784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9784) {
            ctx->pc = 0x4A9788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9784u;
            // 0x4a9788: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A98B8u;
            goto label_4a98b8;
        }
    }
    ctx->pc = 0x4A978Cu;
    // 0x4a978c: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4a978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x4a9790: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4a9790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a9794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9798: 0xc1264fa  jal         func_4993E8
    ctx->pc = 0x4A9798u;
    SET_GPR_U32(ctx, 31, 0x4A97A0u);
    ctx->pc = 0x4A979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9798u;
    // 0x4a979c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4993E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4993E8u, 0x4A9798u, 0x4A97A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97A0u;
label_4a97a0:
    // 0x4a97a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a97a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97a4: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x4A97A4u;
    {
        const bool branch_taken_0x4a97a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A97A4u;
        // 0x4a97a8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a97a4) {
            ctx->pc = 0x4A98B4u;
            goto label_4a98b4;
        }
    }
    ctx->pc = 0x4A97ACu;
    // 0x4a97ac: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x4a97acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a97b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a97b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97b4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4a97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4a97b8: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4A97B8u;
    SET_GPR_U32(ctx, 31, 0x4A97C0u);
    ctx->pc = 0x4A97BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97B8u;
    // 0x4a97bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4A97B8u, 0x4A97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97C0u;
label_4a97c0:
    // 0x4a97c0: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x4a97c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4a97c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a97c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4a97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a97cc: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A97CCu;
    SET_GPR_U32(ctx, 31, 0x4A97D4u);
    ctx->pc = 0x4A97D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97CCu;
    // 0x4a97d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A97CCu, 0x4A97D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97D4u;
label_4a97d4:
    // 0x4a97d4: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x4a97d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4a97d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a97d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a97dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a97e0: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A97E0u;
    SET_GPR_U32(ctx, 31, 0x4A97E8u);
    ctx->pc = 0x4A97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97E0u;
    // 0x4a97e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A97E0u, 0x4A97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97E8u;
label_4a97e8:
    // 0x4a97e8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x4a97e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a97ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a97ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a97f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a97f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a97f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a97f8: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x4a97f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x4a97fc: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4A97FCu;
    SET_GPR_U32(ctx, 31, 0x4A9804u);
    ctx->pc = 0x4A9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A97FCu;
    // 0x4a9800: 0x30e70001  andi        $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4A97FCu, 0x4A9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9804u;
label_4a9804:
    // 0x4a9804: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a9804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9808: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4a9808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x4a980c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A980Cu;
    {
        const bool branch_taken_0x4a980c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a980c) {
            ctx->pc = 0x4A9810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A980Cu;
            // 0x4a9810: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A982Cu;
            goto label_4a982c;
        }
    }
    ctx->pc = 0x4A9814u;
    // 0x4a9814: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x4a9814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4a9818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a981c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a9820: 0xc12637e  jal         func_498DF8
    ctx->pc = 0x4A9820u;
    SET_GPR_U32(ctx, 31, 0x4A9828u);
    ctx->pc = 0x4A9824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9820u;
    // 0x4a9824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DF8u, 0x4A9820u, 0x4A9828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9828u;
label_4a9828:
    // 0x4a9828: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x4a9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a982c:
    // 0x4a982c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9830: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4a9830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4a9834: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A9834u;
    SET_GPR_U32(ctx, 31, 0x4A983Cu);
    ctx->pc = 0x4A9838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9834u;
    // 0x4a9838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A9834u, 0x4A983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A983Cu;
label_4a983c:
    // 0x4a983c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a9840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9848: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4A9848u;
    SET_GPR_U32(ctx, 31, 0x4A9850u);
    ctx->pc = 0x4A984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9848u;
    // 0x4a984c: 0x26070030  addiu       $a3, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4A9848u, 0x4A9850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9850u;
label_4a9850:
    // 0x4a9850: 0x2607003c  addiu       $a3, $s0, 0x3C
    ctx->pc = 0x4a9850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x4a9854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a9858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a985c: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4A985Cu;
    SET_GPR_U32(ctx, 31, 0x4A9864u);
    ctx->pc = 0x4A9860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A985Cu;
    // 0x4a9860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4A985Cu, 0x4A9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9864u;
label_4a9864:
    // 0x4a9864: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x4a9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4a9868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a986c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9870: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A9870u;
    SET_GPR_U32(ctx, 31, 0x4A9878u);
    ctx->pc = 0x4A9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9870u;
    // 0x4a9874: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A9870u, 0x4A9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9878u;
label_4a9878:
    // 0x4a9878: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x4a9878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4a987c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9880: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a9880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a9884: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A9884u;
    SET_GPR_U32(ctx, 31, 0x4A988Cu);
    ctx->pc = 0x4A9888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9884u;
    // 0x4a9888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A9884u, 0x4A988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A988Cu;
label_4a988c:
    // 0x4a988c: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x4a988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4a9890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9894: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4a9894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4a9898: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4A9898u;
    SET_GPR_U32(ctx, 31, 0x4A98A0u);
    ctx->pc = 0x4A989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9898u;
    // 0x4a989c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4A9898u, 0x4A98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A98A0u;
label_4a98a0:
    // 0x4a98a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a98a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a98a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4a98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a98a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a98a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a98ac: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4A98ACu;
    SET_GPR_U32(ctx, 31, 0x4A98B4u);
    ctx->pc = 0x4A98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A98ACu;
    // 0x4a98b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4A98ACu, 0x4A98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A98B4u;
label_4a98b4:
    // 0x4a98b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a98b8:
    // 0x4a98b8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4a98b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a98bc: 0x1614ff50  bne         $s0, $s4, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x4A98BCu;
    {
        const bool branch_taken_0x4a98bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x4A98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98BCu;
        // 0x4a98c0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98bc) {
            ctx->pc = 0x4A9600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9600;
        }
    }
    ctx->pc = 0x4A98C4u;
label_4a98c4:
    // 0x4a98c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a98c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a98c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a98c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a98cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a98ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a98d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a98d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a98d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a98d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a98d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a98d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a98dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A98DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98DCu;
        // 0x4a98e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A98DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A98E4u;
    // 0x4a98e4: 0x0  nop
    ctx->pc = 0x4a98e4u;
    // NOP
    ctx->pc = 0x4a98e8u;
}
