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

// Function: sub_00254B10
// Address: 0x254b10 - 0x254d00
void sub_00254B10_0x254b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254B10_0x254b10");
#endif

    switch (ctx->pc) {
        case 0x254b70u: goto label_254b70;
        case 0x254b84u: goto label_254b84;
        case 0x254b94u: goto label_254b94;
        case 0x254bb4u: goto label_254bb4;
        case 0x254becu: goto label_254bec;
        case 0x254c38u: goto label_254c38;
        case 0x254c40u: goto label_254c40;
        case 0x254c4cu: goto label_254c4c;
        case 0x254c64u: goto label_254c64;
        case 0x254c70u: goto label_254c70;
        case 0x254c80u: goto label_254c80;
        case 0x254c94u: goto label_254c94;
        case 0x254ca4u: goto label_254ca4;
        case 0x254cbcu: goto label_254cbc;
        case 0x254cccu: goto label_254ccc;
        case 0x254cd8u: goto label_254cd8;
        default: break;
    }

    ctx->pc = 0x254b10u;

    // 0x254b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254b14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x254b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x254b18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x254b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254b1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254b20: 0x3e00008  jr          $ra
    ctx->pc = 0x254B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B28u;
    // 0x254b28: 0x0  nop
    ctx->pc = 0x254b28u;
    // NOP
    // 0x254b2c: 0x0  nop
    ctx->pc = 0x254b2cu;
    // NOP
    // 0x254b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254b3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x254b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x254b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b44: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x254B44u;
    {
        const bool branch_taken_0x254b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b44) {
            ctx->pc = 0x254BB4u;
            goto label_254bb4;
        }
    }
    ctx->pc = 0x254B4Cu;
    // 0x254b4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x254b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x254b50: 0x24635890  addiu       $v1, $v1, 0x5890
    ctx->pc = 0x254b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22672));
    // 0x254b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x254b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x254b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b60: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x254b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x254b64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x254b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254b68: 0xc0950a0  jal         func_254280
    ctx->pc = 0x254B68u;
    SET_GPR_U32(ctx, 31, 0x254B70u);
    ctx->pc = 0x254280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254280u, 0x254B68u, 0x254B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B70u;
label_254b70:
    // 0x254b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b74: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x254b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x254b78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x254b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254b7c: 0xc095148  jal         func_254520
    ctx->pc = 0x254B7Cu;
    SET_GPR_U32(ctx, 31, 0x254B84u);
    ctx->pc = 0x254520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254520u, 0x254B7Cu, 0x254B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B84u;
label_254b84:
    // 0x254b84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b8c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x254B8Cu;
    SET_GPR_U32(ctx, 31, 0x254B94u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x254B8Cu, 0x254B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B94u;
label_254b94:
    // 0x254b94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x254b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254b98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x254b9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x254ba0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254BA0u;
    {
        const bool branch_taken_0x254ba0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254ba0) {
            ctx->pc = 0x254BB4u;
            goto label_254bb4;
        }
    }
    ctx->pc = 0x254BA8u;
    // 0x254ba8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254bac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x254BACu;
    SET_GPR_U32(ctx, 31, 0x254BB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x254BACu, 0x254BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BB4u;
label_254bb4:
    // 0x254bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254bbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x254BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BC8u;
    // 0x254bc8: 0x0  nop
    ctx->pc = 0x254bc8u;
    // NOP
    // 0x254bcc: 0x0  nop
    ctx->pc = 0x254bccu;
    // NOP
    // 0x254bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254bdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x254bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x254be0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254be4: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x254BE4u;
    SET_GPR_U32(ctx, 31, 0x254BECu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x254BE4u, 0x254BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BECu;
label_254bec:
    // 0x254bec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x254becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254bf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x254bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254bfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254c00: 0x3e00008  jr          $ra
    ctx->pc = 0x254C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254C08u;
    // 0x254c08: 0x0  nop
    ctx->pc = 0x254c08u;
    // NOP
    // 0x254c0c: 0x0  nop
    ctx->pc = 0x254c0cu;
    // NOP
    // 0x254c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254c20: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x254c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x254c24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254c28: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x254c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x254c2c: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x254c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x254c30: 0xc095410  jal         func_255040
    ctx->pc = 0x254C30u;
    SET_GPR_U32(ctx, 31, 0x254C38u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x254C30u, 0x254C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C38u;
label_254c38:
    // 0x254c38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x254C38u;
    {
        const bool branch_taken_0x254c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254c38) {
            ctx->pc = 0x254C80u;
            goto label_254c80;
        }
    }
    ctx->pc = 0x254C40u;
label_254c40:
    // 0x254c40: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x254c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x254c44: 0xc095408  jal         func_255020
    ctx->pc = 0x254C44u;
    SET_GPR_U32(ctx, 31, 0x254C4Cu);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x254C44u, 0x254C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C4Cu;
label_254c4c:
    // 0x254c4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x254c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254c50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254C50u;
    {
        const bool branch_taken_0x254c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x254c50) {
            ctx->pc = 0x254C74u;
            goto label_254c74;
        }
    }
    ctx->pc = 0x254C58u;
    // 0x254c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c5c: 0xc0953dc  jal         func_254F70
    ctx->pc = 0x254C5Cu;
    SET_GPR_U32(ctx, 31, 0x254C64u);
    ctx->pc = 0x254F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F70u, 0x254C5Cu, 0x254C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C64u;
label_254c64:
    // 0x254c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c68: 0xc119c5c  jal         func_467170
    ctx->pc = 0x254C68u;
    SET_GPR_U32(ctx, 31, 0x254C70u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x254C68u, 0x254C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C70u;
label_254c70:
    // 0x254c70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x254c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254c74:
    // 0x254c74: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x254c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x254c78: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x254C78u;
    SET_GPR_U32(ctx, 31, 0x254C80u);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x254C78u, 0x254C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C80u;
label_254c80:
    // 0x254c80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254c84: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x254c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x254c88: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x254c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x254c8c: 0xc0953a0  jal         func_254E80
    ctx->pc = 0x254C8Cu;
    SET_GPR_U32(ctx, 31, 0x254C94u);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x254C8Cu, 0x254C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C94u;
label_254c94:
    // 0x254c94: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x254c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x254c98: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x254c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x254c9c: 0xc041998  jal         func_106660
    ctx->pc = 0x254C9Cu;
    SET_GPR_U32(ctx, 31, 0x254CA4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x254C9Cu, 0x254CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CA4u;
label_254ca4:
    // 0x254ca4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x254CA4u;
    {
        const bool branch_taken_0x254ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ca4) {
            ctx->pc = 0x254C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254c40;
        }
    }
    ctx->pc = 0x254CACu;
    // 0x254cac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254cb0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x254cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x254cb4: 0xc095394  jal         func_254E50
    ctx->pc = 0x254CB4u;
    SET_GPR_U32(ctx, 31, 0x254CBCu);
    ctx->pc = 0x254E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E50u, 0x254CB4u, 0x254CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CBCu;
label_254cbc:
    // 0x254cbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254cc0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x254cc4: 0xc095340  jal         func_254D00
    ctx->pc = 0x254CC4u;
    SET_GPR_U32(ctx, 31, 0x254CCCu);
    ctx->pc = 0x254D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D00u, 0x254CC4u, 0x254CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CCCu;
label_254ccc:
    // 0x254ccc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x254cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254cd0: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x254CD0u;
    SET_GPR_U32(ctx, 31, 0x254CD8u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x254CD0u, 0x254CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CD8u;
label_254cd8:
    // 0x254cd8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x254cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254cdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x254cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254cec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x254cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x254cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x254CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254CF8u;
    // 0x254cf8: 0x0  nop
    ctx->pc = 0x254cf8u;
    // NOP
    // 0x254cfc: 0x0  nop
    ctx->pc = 0x254cfcu;
    // NOP
    ctx->pc = 0x254d00u;
}
