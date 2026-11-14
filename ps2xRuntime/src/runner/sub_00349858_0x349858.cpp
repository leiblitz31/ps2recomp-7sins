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

// Function: sub_00349858
// Address: 0x349858 - 0x349950
void sub_00349858_0x349858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349858_0x349858");
#endif

    switch (ctx->pc) {
        case 0x34988cu: goto label_34988c;
        case 0x3498a4u: goto label_3498a4;
        case 0x3498b8u: goto label_3498b8;
        case 0x349900u: goto label_349900;
        case 0x349908u: goto label_349908;
        case 0x349918u: goto label_349918;
        case 0x349920u: goto label_349920;
        case 0x349930u: goto label_349930;
        default: break;
    }

    ctx->pc = 0x349858u;

    // 0x349858: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x34985c: 0x8c43c2cc  lw          $v1, -0x3D34($v0)
    ctx->pc = 0x34985cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C2CCu));
    // 0x349860: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x349860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x349864: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349868: 0x3e00008  jr          $ra
    ctx->pc = 0x349868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349868u;
        // 0x34986c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349870u;
    // 0x349870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x349874: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x349874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x349878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x349878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34987c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x34987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x349880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349884: 0xc0d0a36  jal         func_3428D8
    ctx->pc = 0x349884u;
    SET_GPR_U32(ctx, 31, 0x34988Cu);
    ctx->pc = 0x349888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349884u;
    // 0x349888: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3428D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428D8u, 0x349884u, 0x34988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34988Cu;
label_34988c:
    // 0x34988c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349890: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x349890u;
    {
        const bool branch_taken_0x349890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349890u;
        // 0x349894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349890) {
            ctx->pc = 0x349934u;
            goto label_349934;
        }
    }
    ctx->pc = 0x349898u;
    // 0x349898: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x349898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34989c: 0xc0e3330  jal         func_38CCC0
    ctx->pc = 0x34989Cu;
    SET_GPR_U32(ctx, 31, 0x3498A4u);
    ctx->pc = 0x38CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CCC0u, 0x34989Cu, 0x3498A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498A4u;
label_3498a4:
    // 0x3498a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3498a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498a8: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3498A8u;
    {
        const bool branch_taken_0x3498a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3498a8) {
            ctx->pc = 0x349928u;
            goto label_349928;
        }
    }
    ctx->pc = 0x3498B0u;
    // 0x3498b0: 0xc0e2094  jal         func_388250
    ctx->pc = 0x3498B0u;
    SET_GPR_U32(ctx, 31, 0x3498B8u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x3498B0u, 0x3498B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498B8u;
label_3498b8:
    // 0x3498b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3498b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498bc: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3498BCu;
    {
        const bool branch_taken_0x3498bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498BCu;
        // 0x3498c0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498bc) {
            ctx->pc = 0x349910u;
            goto label_349910;
        }
    }
    ctx->pc = 0x3498C4u;
    // 0x3498c4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3498c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x3498c8: 0x8c43c2cc  lw          $v1, -0x3D34($v0)
    ctx->pc = 0x3498c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951628)));
    // 0x3498cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3498d0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3498d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3498d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3498d8: 0x24429ce8  addiu       $v0, $v0, -0x6318
    ctx->pc = 0x3498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941928));
    // 0x3498dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3498DCu;
    {
        const bool branch_taken_0x3498dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3498E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498DCu;
        // 0x3498e0: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498dc) {
            ctx->pc = 0x3498F0u;
            goto label_3498f0;
        }
    }
    ctx->pc = 0x3498E4u;
    // 0x3498e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3498e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3498e8: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x3498e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
    // 0x3498ec: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x3498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_3498f0:
    // 0x3498f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3498f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3498f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498f8: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x3498F8u;
    SET_GPR_U32(ctx, 31, 0x349900u);
    ctx->pc = 0x3498FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498F8u;
    // 0x3498fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3498F8u, 0x349900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349900u;
label_349900:
    // 0x349900: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x349900u;
    SET_GPR_U32(ctx, 31, 0x349908u);
    ctx->pc = 0x349904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349900u;
    // 0x349904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x349900u, 0x349908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349908u;
label_349908:
    // 0x349908: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x349908u;
    {
        const bool branch_taken_0x349908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349908u;
        // 0x34990c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349908) {
            ctx->pc = 0x349934u;
            goto label_349934;
        }
    }
    ctx->pc = 0x349910u;
label_349910:
    // 0x349910: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x349910u;
    SET_GPR_U32(ctx, 31, 0x349918u);
    ctx->pc = 0x349914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349910u;
    // 0x349914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x349910u, 0x349918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349918u;
label_349918:
    // 0x349918: 0xc0d0a80  jal         func_342A00
    ctx->pc = 0x349918u;
    SET_GPR_U32(ctx, 31, 0x349920u);
    ctx->pc = 0x34991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349918u;
    // 0x34991c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A00u, 0x349918u, 0x349920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349920u;
label_349920:
    // 0x349920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x349920u;
    {
        const bool branch_taken_0x349920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349920u;
        // 0x349924: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349920) {
            ctx->pc = 0x349934u;
            goto label_349934;
        }
    }
    ctx->pc = 0x349928u;
label_349928:
    // 0x349928: 0xc0d0a80  jal         func_342A00
    ctx->pc = 0x349928u;
    SET_GPR_U32(ctx, 31, 0x349930u);
    ctx->pc = 0x34992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349928u;
    // 0x34992c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A00u, 0x349928u, 0x349930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349930u;
label_349930:
    // 0x349930: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349934:
    // 0x349934: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x349934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349938: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x349938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34993c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x34993cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349944: 0x3e00008  jr          $ra
    ctx->pc = 0x349944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349944u;
        // 0x349948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34994Cu;
    // 0x34994c: 0x0  nop
    ctx->pc = 0x34994cu;
    // NOP
    ctx->pc = 0x349950u;
}
