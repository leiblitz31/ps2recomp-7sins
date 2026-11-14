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

// Function: sub_00294B40
// Address: 0x294b40 - 0x294d70
void sub_00294B40_0x294b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B40_0x294b40");
#endif

    switch (ctx->pc) {
        case 0x294b80u: goto label_294b80;
        case 0x294b90u: goto label_294b90;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bf0u: goto label_294bf0;
        case 0x294c00u: goto label_294c00;
        case 0x294c10u: goto label_294c10;
        case 0x294c28u: goto label_294c28;
        case 0x294c6cu: goto label_294c6c;
        case 0x294c7cu: goto label_294c7c;
        case 0x294c9cu: goto label_294c9c;
        case 0x294cacu: goto label_294cac;
        case 0x294cfcu: goto label_294cfc;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d4cu: goto label_294d4c;
        default: break;
    }

    ctx->pc = 0x294b40u;

    // 0x294b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x294b4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x294b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x294b50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x294B54u;
    {
        const bool branch_taken_0x294b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b54) {
            ctx->pc = 0x294BB0u;
            goto label_294bb0;
        }
    }
    ctx->pc = 0x294B5Cu;
    // 0x294b5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x294b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x294b60: 0x24636050  addiu       $v1, $v1, 0x6050
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24656));
    // 0x294b64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x294b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x294b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b70: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x294b74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294b78: 0xc0a5214  jal         func_294850
    ctx->pc = 0x294B78u;
    SET_GPR_U32(ctx, 31, 0x294B80u);
    ctx->pc = 0x294850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294850u, 0x294B78u, 0x294B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B80u;
label_294b80:
    // 0x294b80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b88: 0xc091188  jal         func_244620
    ctx->pc = 0x294B88u;
    SET_GPR_U32(ctx, 31, 0x294B90u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x294B88u, 0x294B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B90u;
label_294b90:
    // 0x294b90: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294b94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x294b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x294b98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x294b98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x294b9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294B9Cu;
    {
        const bool branch_taken_0x294b9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x294b9c) {
            ctx->pc = 0x294BB0u;
            goto label_294bb0;
        }
    }
    ctx->pc = 0x294BA4u;
    // 0x294ba4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ba8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x294BA8u;
    SET_GPR_U32(ctx, 31, 0x294BB0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x294BA8u, 0x294BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BB0u;
label_294bb0:
    // 0x294bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294bb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x294BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294BC4u;
    // 0x294bc4: 0x0  nop
    ctx->pc = 0x294bc4u;
    // NOP
    // 0x294bc8: 0x0  nop
    ctx->pc = 0x294bc8u;
    // NOP
    // 0x294bcc: 0x0  nop
    ctx->pc = 0x294bccu;
    // NOP
    // 0x294bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294be0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x294be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x294be4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x294be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294be8: 0xc0911a4  jal         func_244690
    ctx->pc = 0x294BE8u;
    SET_GPR_U32(ctx, 31, 0x294BF0u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x294BE8u, 0x294BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BF0u;
label_294bf0:
    // 0x294bf0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x294bf0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x294bf4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x294bf8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x294BF8u;
    SET_GPR_U32(ctx, 31, 0x294C00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x294BF8u, 0x294C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C00u;
label_294c00:
    // 0x294c00: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x294c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x294c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c08: 0xc0400e0  jal         func_100380
    ctx->pc = 0x294C08u;
    SET_GPR_U32(ctx, 31, 0x294C10u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x294C08u, 0x294C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C10u;
label_294c10:
    // 0x294c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c14: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294C14u;
    {
        const bool branch_taken_0x294c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294c14) {
            ctx->pc = 0x294C2Cu;
            goto label_294c2c;
        }
    }
    ctx->pc = 0x294C1Cu;
    // 0x294c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c20: 0xc1216ec  jal         func_485BB0
    ctx->pc = 0x294C20u;
    SET_GPR_U32(ctx, 31, 0x294C28u);
    ctx->pc = 0x485BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BB0u, 0x294C20u, 0x294C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C28u;
label_294c28:
    // 0x294c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294c2c:
    // 0x294c2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x294c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294c30: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x294c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
    // 0x294c34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x294c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294c44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x294c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x294c48: 0x3e00008  jr          $ra
    ctx->pc = 0x294C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C50u;
    // 0x294c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294c5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x294c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x294c60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x294c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c64: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x294C64u;
    SET_GPR_U32(ctx, 31, 0x294C6Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x294C64u, 0x294C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C6Cu;
label_294c6c:
    // 0x294c6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x294c6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x294c70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c74: 0xc0a599c  jal         func_296670
    ctx->pc = 0x294C74u;
    SET_GPR_U32(ctx, 31, 0x294C7Cu);
    ctx->pc = 0x296670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296670u, 0x294C74u, 0x294C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C7Cu;
label_294c7c:
    // 0x294c7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c80: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x294c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x294c84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x294C84u;
    {
        const bool branch_taken_0x294c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294c84) {
            ctx->pc = 0x294CB4u;
            goto label_294cb4;
        }
    }
    ctx->pc = 0x294C8Cu;
    // 0x294c8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c90: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x294c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x294c94: 0xc083b8c  jal         func_20EE30
    ctx->pc = 0x294C94u;
    SET_GPR_U32(ctx, 31, 0x294C9Cu);
    ctx->pc = 0x20EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE30u, 0x294C94u, 0x294C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C9Cu;
label_294c9c:
    // 0x294c9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294ca0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x294ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x294ca4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x294CA4u;
    SET_GPR_U32(ctx, 31, 0x294CACu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x294CA4u, 0x294CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CACu;
label_294cac:
    // 0x294cac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294cb0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x294cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_294cb4:
    // 0x294cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x294cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294cc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x294CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294CCCu;
    // 0x294ccc: 0x0  nop
    ctx->pc = 0x294cccu;
    // NOP
    // 0x294cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x294cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x294cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294ce4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x294ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x294ce8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x294ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x294cec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x294cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294cf0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294cf4: 0xc0911dc  jal         func_244770
    ctx->pc = 0x294CF4u;
    SET_GPR_U32(ctx, 31, 0x294CFCu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x294CF4u, 0x294CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CFCu;
label_294cfc:
    // 0x294cfc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x294cfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x294d00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x294d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294d04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x294d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294d08: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294D08u;
    {
        const bool branch_taken_0x294d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x294d08) {
            ctx->pc = 0x294D20u;
            goto label_294d20;
        }
    }
    ctx->pc = 0x294D10u;
    // 0x294d10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294d14: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x294d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294D18u;
    {
        const bool branch_taken_0x294d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294d18) {
            ctx->pc = 0x294D28u;
            goto label_294d28;
        }
    }
    ctx->pc = 0x294D20u;
label_294d20:
    // 0x294d20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x294d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294d24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x294d24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_294d28:
    // 0x294d28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x294d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x294d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294d30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d34: 0xc0a5710  jal         func_295C40
    ctx->pc = 0x294D34u;
    SET_GPR_U32(ctx, 31, 0x294D3Cu);
    ctx->pc = 0x295C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C40u, 0x294D34u, 0x294D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D3Cu;
label_294d3c:
    // 0x294d3c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x294d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d44: 0xc0a58f8  jal         func_2963E0
    ctx->pc = 0x294D44u;
    SET_GPR_U32(ctx, 31, 0x294D4Cu);
    ctx->pc = 0x2963E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963E0u, 0x294D44u, 0x294D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D4Cu;
label_294d4c:
    // 0x294d4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x294d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x294d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x294d64: 0x3e00008  jr          $ra
    ctx->pc = 0x294D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D6Cu;
    // 0x294d6c: 0x0  nop
    ctx->pc = 0x294d6cu;
    // NOP
    ctx->pc = 0x294d70u;
}
