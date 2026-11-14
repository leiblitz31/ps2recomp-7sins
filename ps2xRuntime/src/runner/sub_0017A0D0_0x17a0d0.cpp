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

// Function: sub_0017A0D0
// Address: 0x17a0d0 - 0x17a230
void sub_0017A0D0_0x17a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A0D0_0x17a0d0");
#endif

    switch (ctx->pc) {
        case 0x17a104u: goto label_17a104;
        case 0x17a118u: goto label_17a118;
        case 0x17a13cu: goto label_17a13c;
        case 0x17a164u: goto label_17a164;
        case 0x17a188u: goto label_17a188;
        case 0x17a1b0u: goto label_17a1b0;
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a214u: goto label_17a214;
        default: break;
    }

    ctx->pc = 0x17a0d0u;

    // 0x17a0d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17a0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a0e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17a0e8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x17a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x17a0ec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x17a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x17a0f0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x17a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x17a0f4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x17a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x17a0f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a0fc: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x17A0FCu;
    SET_GPR_U32(ctx, 31, 0x17A104u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x17A0FCu, 0x17A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A104u;
label_17a104:
    // 0x17a104: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x17a104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x17a108: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x17a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17a10c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a110: 0xc041954  jal         func_106550
    ctx->pc = 0x17A110u;
    SET_GPR_U32(ctx, 31, 0x17A118u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x17A110u, 0x17A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A118u;
label_17a118:
    // 0x17a118: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x17a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17a11c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a120: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x17a120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a124: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a128: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x17a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17a12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a134: 0xc05e96c  jal         func_17A5B0
    ctx->pc = 0x17A134u;
    SET_GPR_U32(ctx, 31, 0x17A13Cu);
    ctx->pc = 0x17A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5B0u, 0x17A134u, 0x17A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A13Cu;
label_17a13c:
    // 0x17a13c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a140: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x17a140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a144: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a148: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x17a148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a14c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a150: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x17a150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a158: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x17a158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17a15c: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x17A15Cu;
    SET_GPR_U32(ctx, 31, 0x17A164u);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x17A15Cu, 0x17A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A164u;
label_17a164:
    // 0x17a164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a168: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a170: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A170u;
    {
        const bool branch_taken_0x17a170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a170) {
            ctx->pc = 0x17A194u;
            goto label_17a194;
        }
    }
    ctx->pc = 0x17A178u;
    // 0x17a178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a17c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a180: 0xc05e8dc  jal         func_17A370
    ctx->pc = 0x17A180u;
    SET_GPR_U32(ctx, 31, 0x17A188u);
    ctx->pc = 0x17A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A370u, 0x17A180u, 0x17A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A188u;
label_17a188:
    // 0x17a188: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x17a188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17a18c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A18Cu;
    {
        const bool branch_taken_0x17a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a18c) {
            ctx->pc = 0x17A1B4u;
            goto label_17a1b4;
        }
    }
    ctx->pc = 0x17A194u;
label_17a194:
    // 0x17a194: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x17a194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a19c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a1a0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x17a1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a1a4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x17a1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x17a1a8: 0xc05e8bc  jal         func_17A2F0
    ctx->pc = 0x17A1A8u;
    SET_GPR_U32(ctx, 31, 0x17A1B0u);
    ctx->pc = 0x17A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A2F0u, 0x17A1A8u, 0x17A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1B0u;
label_17a1b0:
    // 0x17a1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a1b4:
    // 0x17a1b4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x17a1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17a1b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A1B8u;
    {
        const bool branch_taken_0x17a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a1b8) {
            ctx->pc = 0x17A1E4u;
            goto label_17a1e4;
        }
    }
    ctx->pc = 0x17A1C0u;
    // 0x17a1c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a1c4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x17a1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a1cc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17a1d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x17a1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a1d8: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x17A1D8u;
    SET_GPR_U32(ctx, 31, 0x17A1E0u);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x17A1D8u, 0x17A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1E0u;
label_17a1e0:
    // 0x17a1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a1e4:
    // 0x17a1e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a1e8: 0xc05e8a0  jal         func_17A280
    ctx->pc = 0x17A1E8u;
    SET_GPR_U32(ctx, 31, 0x17A1F0u);
    ctx->pc = 0x17A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A280u, 0x17A1E8u, 0x17A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1F0u;
label_17a1f0:
    // 0x17a1f0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x17a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x17a1f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17a1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a1fc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17a200: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a208: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a20c: 0xc05e88c  jal         func_17A230
    ctx->pc = 0x17A20Cu;
    SET_GPR_U32(ctx, 31, 0x17A214u);
    ctx->pc = 0x17A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A230u, 0x17A20Cu, 0x17A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A214u;
label_17a214:
    // 0x17a214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a224: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x17a224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17a228: 0x3e00008  jr          $ra
    ctx->pc = 0x17A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A230u;
}
