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

// Function: sub_0026FEF0
// Address: 0x26fef0 - 0x270080
void sub_0026FEF0_0x26fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FEF0_0x26fef0");
#endif

    switch (ctx->pc) {
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff80u: goto label_26ff80;
        case 0x26ffbcu: goto label_26ffbc;
        case 0x26fffcu: goto label_26fffc;
        case 0x270010u: goto label_270010;
        case 0x270054u: goto label_270054;
        case 0x270068u: goto label_270068;
        default: break;
    }

    ctx->pc = 0x26fef0u;

    // 0x26fef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fef4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26fef8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fefc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26fefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ff00: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FF08u;
    // 0x26ff08: 0x0  nop
    ctx->pc = 0x26ff08u;
    // NOP
    // 0x26ff0c: 0x0  nop
    ctx->pc = 0x26ff0cu;
    // NOP
    // 0x26ff10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ff14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ff18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26ff1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26ff1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x26ff20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26FF24u;
    {
        const bool branch_taken_0x26ff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff24) {
            ctx->pc = 0x26FF80u;
            goto label_26ff80;
        }
    }
    ctx->pc = 0x26FF2Cu;
    // 0x26ff2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26ff30: 0x24635a40  addiu       $v1, $v1, 0x5A40
    ctx->pc = 0x26ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
    // 0x26ff34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26ff3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff40: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26ff44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ff48: 0xc09bee4  jal         func_26FB90
    ctx->pc = 0x26FF48u;
    SET_GPR_U32(ctx, 31, 0x26FF50u);
    ctx->pc = 0x26FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB90u, 0x26FF48u, 0x26FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF50u;
label_26ff50:
    // 0x26ff50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff58: 0xc091188  jal         func_244620
    ctx->pc = 0x26FF58u;
    SET_GPR_U32(ctx, 31, 0x26FF60u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x26FF58u, 0x26FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF60u;
label_26ff60:
    // 0x26ff60: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26ff60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ff64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ff68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26ff68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ff6c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FF6Cu;
    {
        const bool branch_taken_0x26ff6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26ff6c) {
            ctx->pc = 0x26FF80u;
            goto label_26ff80;
        }
    }
    ctx->pc = 0x26FF74u;
    // 0x26ff74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff78: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26FF78u;
    SET_GPR_U32(ctx, 31, 0x26FF80u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26FF78u, 0x26FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF80u;
label_26ff80:
    // 0x26ff80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ff88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26ff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FF94u;
    // 0x26ff94: 0x0  nop
    ctx->pc = 0x26ff94u;
    // NOP
    // 0x26ff98: 0x0  nop
    ctx->pc = 0x26ff98u;
    // NOP
    // 0x26ff9c: 0x0  nop
    ctx->pc = 0x26ff9cu;
    // NOP
    // 0x26ffa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ffa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ffa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ffac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26ffb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ffb4: 0xc0911a4  jal         func_244690
    ctx->pc = 0x26FFB4u;
    SET_GPR_U32(ctx, 31, 0x26FFBCu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x26FFB4u, 0x26FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFBCu;
label_26ffbc:
    // 0x26ffbc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26ffbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ffc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26ffc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ffc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ffc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ffcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26ffccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FFD8u;
    // 0x26ffd8: 0x0  nop
    ctx->pc = 0x26ffd8u;
    // NOP
    // 0x26ffdc: 0x0  nop
    ctx->pc = 0x26ffdcu;
    // NOP
    // 0x26ffe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ffe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ffe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ffec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26fff0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fff4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x26FFF4u;
    SET_GPR_U32(ctx, 31, 0x26FFFCu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x26FFF4u, 0x26FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFFCu;
label_26fffc:
    // 0x26fffc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26fffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270000: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x270000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270004: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x270004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270008: 0xc09c2c8  jal         func_270B20
    ctx->pc = 0x270008u;
    SET_GPR_U32(ctx, 31, 0x270010u);
    ctx->pc = 0x270B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270B20u, 0x270008u, 0x270010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270010u;
label_270010:
    // 0x270010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x270010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27001c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x270020: 0x3e00008  jr          $ra
    ctx->pc = 0x270020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270028u;
    // 0x270028: 0x0  nop
    ctx->pc = 0x270028u;
    // NOP
    // 0x27002c: 0x0  nop
    ctx->pc = 0x27002cu;
    // NOP
    // 0x270030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27003c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x270040: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x270040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x270044: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x270044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270048: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x270048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27004c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x27004Cu;
    SET_GPR_U32(ctx, 31, 0x270054u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x27004Cu, 0x270054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270054u;
label_270054:
    // 0x270054: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x270054u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270058: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x270058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27005c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x27005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x270060: 0xc09c020  jal         func_270080
    ctx->pc = 0x270060u;
    SET_GPR_U32(ctx, 31, 0x270068u);
    ctx->pc = 0x270080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270080u, 0x270060u, 0x270068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270068u;
label_270068:
    // 0x270068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x270068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27006c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270074: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x270078: 0x3e00008  jr          $ra
    ctx->pc = 0x270078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270080u;
}
