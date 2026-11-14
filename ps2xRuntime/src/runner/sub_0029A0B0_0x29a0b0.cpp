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

// Function: sub_0029A0B0
// Address: 0x29a0b0 - 0x29a260
void sub_0029A0B0_0x29a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0B0_0x29a0b0");
#endif

    switch (ctx->pc) {
        case 0x29a100u: goto label_29a100;
        case 0x29a110u: goto label_29a110;
        case 0x29a130u: goto label_29a130;
        case 0x29a16cu: goto label_29a16c;
        case 0x29a1b4u: goto label_29a1b4;
        case 0x29a1c0u: goto label_29a1c0;
        case 0x29a1d0u: goto label_29a1d0;
        case 0x29a200u: goto label_29a200;
        case 0x29a218u: goto label_29a218;
        default: break;
    }

    ctx->pc = 0x29a0b0u;

    // 0x29a0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29a0bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29a0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x29a0c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a0c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29A0C4u;
    {
        const bool branch_taken_0x29a0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a0c4) {
            ctx->pc = 0x29A130u;
            goto label_29a130;
        }
    }
    ctx->pc = 0x29A0CCu;
    // 0x29a0cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29a0d0: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x29a0d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a0d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29a0dc: 0xaf80bc24  sw          $zero, -0x43DC($gp)
    ctx->pc = 0x29a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949924), GPR_U32(ctx, 0));
    // 0x29a0e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a0e4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a0e8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a0ec: 0x24a59d30  addiu       $a1, $a1, -0x62D0
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942000));
    // 0x29a0f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29a0f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a0f8: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x29A0F8u;
    SET_GPR_U32(ctx, 31, 0x29A100u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x29A0F8u, 0x29A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A100u;
label_29a100:
    // 0x29a100: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a108: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x29A108u;
    SET_GPR_U32(ctx, 31, 0x29A110u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x29A108u, 0x29A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A110u;
label_29a110:
    // 0x29a110: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29a110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a114: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29a118: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29a118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29a11c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A11Cu;
    {
        const bool branch_taken_0x29a11c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29a11c) {
            ctx->pc = 0x29A130u;
            goto label_29a130;
        }
    }
    ctx->pc = 0x29A124u;
    // 0x29a124: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a128: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x29A128u;
    SET_GPR_U32(ctx, 31, 0x29A130u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29A128u, 0x29A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A130u;
label_29a130:
    // 0x29a130: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a138: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A144u;
    // 0x29a144: 0x0  nop
    ctx->pc = 0x29a144u;
    // NOP
    // 0x29a148: 0x0  nop
    ctx->pc = 0x29a148u;
    // NOP
    // 0x29a14c: 0x0  nop
    ctx->pc = 0x29a14cu;
    // NOP
    // 0x29a150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a15c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29a160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a164: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x29A164u;
    SET_GPR_U32(ctx, 31, 0x29A16Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x29A164u, 0x29A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A16Cu;
label_29a16c:
    // 0x29a16c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29a16cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a17c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a180: 0x3e00008  jr          $ra
    ctx->pc = 0x29A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A188u;
    // 0x29a188: 0x0  nop
    ctx->pc = 0x29a188u;
    // NOP
    // 0x29a18c: 0x0  nop
    ctx->pc = 0x29a18cu;
    // NOP
    // 0x29a190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a1a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29a1a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a1ac: 0xc0a6b0c  jal         func_29AC30
    ctx->pc = 0x29A1ACu;
    SET_GPR_U32(ctx, 31, 0x29A1B4u);
    ctx->pc = 0x29AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC30u, 0x29A1ACu, 0x29A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A1B4u;
label_29a1b4:
    // 0x29a1b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a1b8: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x29A1B8u;
    SET_GPR_U32(ctx, 31, 0x29A1C0u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x29A1B8u, 0x29A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A1C0u;
label_29a1c0:
    // 0x29a1c0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29a1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a1c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29A1C8u;
    {
        const bool branch_taken_0x29a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a1c8) {
            ctx->pc = 0x29A22Cu;
            goto label_29a22c;
        }
    }
    ctx->pc = 0x29A1D0u;
label_29a1d0:
    // 0x29a1d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29a1d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a1dc: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x29a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x29a1e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A1E0u;
    {
        const bool branch_taken_0x29a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a1e0) {
            ctx->pc = 0x29A228u;
            goto label_29a228;
        }
    }
    ctx->pc = 0x29A1E8u;
    // 0x29a1e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29a1ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a1f4: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x29a1f8: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x29A1F8u;
    SET_GPR_U32(ctx, 31, 0x29A200u);
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x29A1F8u, 0x29A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A200u;
label_29a200:
    // 0x29a200: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29a204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a20c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x29a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x29a210: 0xc119c5c  jal         func_467170
    ctx->pc = 0x29A210u;
    SET_GPR_U32(ctx, 31, 0x29A218u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x29A210u, 0x29A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A218u;
label_29a218:
    // 0x29a218: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29a21c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a224: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x29a224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_29a228:
    // 0x29a228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29a228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29a22c:
    // 0x29a22c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x29a22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x29a230: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x29A230u;
    {
        const bool branch_taken_0x29a230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a230) {
            ctx->pc = 0x29A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a1d0;
        }
    }
    ctx->pc = 0x29A238u;
    // 0x29a238: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29a238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a248: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A254u;
    // 0x29a254: 0x0  nop
    ctx->pc = 0x29a254u;
    // NOP
    // 0x29a258: 0x0  nop
    ctx->pc = 0x29a258u;
    // NOP
    // 0x29a25c: 0x0  nop
    ctx->pc = 0x29a25cu;
    // NOP
    ctx->pc = 0x29a260u;
}
