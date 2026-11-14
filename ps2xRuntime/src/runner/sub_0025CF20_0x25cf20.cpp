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

// Function: sub_0025CF20
// Address: 0x25cf20 - 0x25d110
void sub_0025CF20_0x25cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CF20_0x25cf20");
#endif

    switch (ctx->pc) {
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0ecu: goto label_25d0ec;
        default: break;
    }

    ctx->pc = 0x25cf20u;

    // 0x25cf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cf28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25cf2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf30: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x25cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25cf34: 0xc091174  jal         func_2445D0
    ctx->pc = 0x25CF34u;
    SET_GPR_U32(ctx, 31, 0x25CF3Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x25CF34u, 0x25CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF3Cu;
label_25cf3c:
    // 0x25cf3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25cf40: 0x24635930  addiu       $v1, $v1, 0x5930
    ctx->pc = 0x25cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22832));
    // 0x25cf44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cf4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf50: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x25cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x25cf54: 0xc089708  jal         func_225C20
    ctx->pc = 0x25CF54u;
    SET_GPR_U32(ctx, 31, 0x25CF5Cu);
    ctx->pc = 0x225C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C20u, 0x25CF54u, 0x25CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF5Cu;
label_25cf5c:
    // 0x25cf5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cf64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25cf64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CF70u;
    // 0x25cf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25cf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25cf7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25cf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25cf80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf84: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25CF84u;
    {
        const bool branch_taken_0x25cf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cf84) {
            ctx->pc = 0x25CFE0u;
            goto label_25cfe0;
        }
    }
    ctx->pc = 0x25CF8Cu;
    // 0x25cf8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25cf90: 0x24635930  addiu       $v1, $v1, 0x5930
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22832));
    // 0x25cf94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cf9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfa0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x25cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x25cfa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25cfa8: 0xc089764  jal         func_225D90
    ctx->pc = 0x25CFA8u;
    SET_GPR_U32(ctx, 31, 0x25CFB0u);
    ctx->pc = 0x225D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D90u, 0x25CFA8u, 0x25CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFB0u;
label_25cfb0:
    // 0x25cfb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfb8: 0xc091188  jal         func_244620
    ctx->pc = 0x25CFB8u;
    SET_GPR_U32(ctx, 31, 0x25CFC0u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x25CFB8u, 0x25CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFC0u;
label_25cfc0:
    // 0x25cfc0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cfc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25cfc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25cfc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25cfcc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CFCCu;
    {
        const bool branch_taken_0x25cfcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25cfcc) {
            ctx->pc = 0x25CFE0u;
            goto label_25cfe0;
        }
    }
    ctx->pc = 0x25CFD4u;
    // 0x25cfd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfd8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25CFD8u;
    SET_GPR_U32(ctx, 31, 0x25CFE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25CFD8u, 0x25CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFE0u;
label_25cfe0:
    // 0x25cfe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cfe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25cfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CFF4u;
    // 0x25cff4: 0x0  nop
    ctx->pc = 0x25cff4u;
    // NOP
    // 0x25cff8: 0x0  nop
    ctx->pc = 0x25cff8u;
    // NOP
    // 0x25cffc: 0x0  nop
    ctx->pc = 0x25cffcu;
    // NOP
    // 0x25d000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d00c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d010: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d014: 0xc0911a4  jal         func_244690
    ctx->pc = 0x25D014u;
    SET_GPR_U32(ctx, 31, 0x25D01Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x25D014u, 0x25D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D01Cu;
label_25d01c:
    // 0x25d01c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x25d01cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d02c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d030: 0x3e00008  jr          $ra
    ctx->pc = 0x25D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D038u;
    // 0x25d038: 0x0  nop
    ctx->pc = 0x25d038u;
    // NOP
    // 0x25d03c: 0x0  nop
    ctx->pc = 0x25d03cu;
    // NOP
    // 0x25d040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d04c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d050: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d054: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x25D054u;
    SET_GPR_U32(ctx, 31, 0x25D05Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x25D054u, 0x25D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D05Cu;
label_25d05c:
    // 0x25d05c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x25d05cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d06c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d06cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d070: 0x3e00008  jr          $ra
    ctx->pc = 0x25D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D078u;
    // 0x25d078: 0x0  nop
    ctx->pc = 0x25d078u;
    // NOP
    // 0x25d07c: 0x0  nop
    ctx->pc = 0x25d07cu;
    // NOP
    // 0x25d080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25d084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d090: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25d090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25d094: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25d094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25d098: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25d098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d09c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d0a0: 0xc0911dc  jal         func_244770
    ctx->pc = 0x25D0A0u;
    SET_GPR_U32(ctx, 31, 0x25D0A8u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x25D0A0u, 0x25D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0A8u;
label_25d0a8:
    // 0x25d0a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25d0a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d0ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d0b0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25d0b4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25d0b8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25D0B8u;
    SET_GPR_U32(ctx, 31, 0x25D0C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25D0B8u, 0x25D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0C0u;
label_25d0c0:
    // 0x25d0c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0c4: 0x10100009  beq         $zero, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D0C4u;
    {
        const bool branch_taken_0x25d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x25d0c4) {
            ctx->pc = 0x25D0ECu;
            goto label_25d0ec;
        }
    }
    ctx->pc = 0x25D0CCu;
    // 0x25d0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0d0: 0xc091018  jal         func_244060
    ctx->pc = 0x25D0D0u;
    SET_GPR_U32(ctx, 31, 0x25D0D8u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x25D0D0u, 0x25D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0D8u;
label_25d0d8:
    // 0x25d0d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d0dc: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x25d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x25d0e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25d0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0e4: 0xc089a7c  jal         func_2269F0
    ctx->pc = 0x25D0E4u;
    SET_GPR_U32(ctx, 31, 0x25D0ECu);
    ctx->pc = 0x2269F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269F0u, 0x25D0E4u, 0x25D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0ECu;
label_25d0ec:
    // 0x25d0ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25d0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d0fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25d0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d100: 0x3e00008  jr          $ra
    ctx->pc = 0x25D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D108u;
    // 0x25d108: 0x0  nop
    ctx->pc = 0x25d108u;
    // NOP
    // 0x25d10c: 0x0  nop
    ctx->pc = 0x25d10cu;
    // NOP
    ctx->pc = 0x25d110u;
}
