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

// Function: sub_00217A50
// Address: 0x217a50 - 0x217c00
void sub_00217A50_0x217a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A50_0x217a50");
#endif

    switch (ctx->pc) {
        case 0x217ab0u: goto label_217ab0;
        case 0x217ac0u: goto label_217ac0;
        case 0x217ae0u: goto label_217ae0;
        case 0x217b18u: goto label_217b18;
        case 0x217b50u: goto label_217b50;
        case 0x217b64u: goto label_217b64;
        case 0x217b7cu: goto label_217b7c;
        case 0x217b88u: goto label_217b88;
        case 0x217ba0u: goto label_217ba0;
        case 0x217bacu: goto label_217bac;
        case 0x217bc4u: goto label_217bc4;
        case 0x217bdcu: goto label_217bdc;
        default: break;
    }

    ctx->pc = 0x217a50u;

    // 0x217a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x217a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x217a58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x217a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x217a60: 0x3e00008  jr          $ra
    ctx->pc = 0x217A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A68u;
    // 0x217a68: 0x0  nop
    ctx->pc = 0x217a68u;
    // NOP
    // 0x217a6c: 0x0  nop
    ctx->pc = 0x217a6cu;
    // NOP
    // 0x217a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x217a7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x217a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x217a80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a84: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x217A84u;
    {
        const bool branch_taken_0x217a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a84) {
            ctx->pc = 0x217AE0u;
            goto label_217ae0;
        }
    }
    ctx->pc = 0x217A8Cu;
    // 0x217a8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x217a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x217a90: 0x24635230  addiu       $v1, $v1, 0x5230
    ctx->pc = 0x217a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21040));
    // 0x217a94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x217a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x217a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217aa0: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x217aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217aa8: 0xc085dbc  jal         func_2176F0
    ctx->pc = 0x217AA8u;
    SET_GPR_U32(ctx, 31, 0x217AB0u);
    ctx->pc = 0x2176F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2176F0u, 0x217AA8u, 0x217AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AB0u;
label_217ab0:
    // 0x217ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ab8: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x217AB8u;
    SET_GPR_U32(ctx, 31, 0x217AC0u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x217AB8u, 0x217AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AC0u;
label_217ac0:
    // 0x217ac0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x217ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ac4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x217ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x217ac8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x217ac8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x217acc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217ACCu;
    {
        const bool branch_taken_0x217acc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x217acc) {
            ctx->pc = 0x217AE0u;
            goto label_217ae0;
        }
    }
    ctx->pc = 0x217AD4u;
    // 0x217ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ad8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x217AD8u;
    SET_GPR_U32(ctx, 31, 0x217AE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x217AD8u, 0x217AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AE0u;
label_217ae0:
    // 0x217ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217ae8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217aec: 0x3e00008  jr          $ra
    ctx->pc = 0x217AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217AF4u;
    // 0x217af4: 0x0  nop
    ctx->pc = 0x217af4u;
    // NOP
    // 0x217af8: 0x0  nop
    ctx->pc = 0x217af8u;
    // NOP
    // 0x217afc: 0x0  nop
    ctx->pc = 0x217afcu;
    // NOP
    // 0x217b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x217b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217b10: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x217B10u;
    SET_GPR_U32(ctx, 31, 0x217B18u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x217B10u, 0x217B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B18u;
label_217b18:
    // 0x217b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x217b20: 0x3e00008  jr          $ra
    ctx->pc = 0x217B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217B28u;
    // 0x217b28: 0x0  nop
    ctx->pc = 0x217b28u;
    // NOP
    // 0x217b2c: 0x0  nop
    ctx->pc = 0x217b2cu;
    // NOP
    // 0x217b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217b40: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x217b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x217b44: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x217b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217b48: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x217B48u;
    SET_GPR_U32(ctx, 31, 0x217B50u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x217B48u, 0x217B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B50u;
label_217b50:
    // 0x217b50: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x217b50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x217b54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217b58: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217b5c: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x217B5Cu;
    SET_GPR_U32(ctx, 31, 0x217B64u);
    ctx->pc = 0x217D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D70u, 0x217B5Cu, 0x217B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B64u;
label_217b64:
    // 0x217b64: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x217B64u;
    {
        const bool branch_taken_0x217b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b64) {
            ctx->pc = 0x217BDCu;
            goto label_217bdc;
        }
    }
    ctx->pc = 0x217B6Cu;
    // 0x217b6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217b70: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217b74: 0xc085f54  jal         func_217D50
    ctx->pc = 0x217B74u;
    SET_GPR_U32(ctx, 31, 0x217B7Cu);
    ctx->pc = 0x217D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D50u, 0x217B74u, 0x217B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B7Cu;
label_217b7c:
    // 0x217b7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217B80u;
    {
        const bool branch_taken_0x217b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b80) {
            ctx->pc = 0x217BB4u;
            goto label_217bb4;
        }
    }
    ctx->pc = 0x217B88u;
label_217b88:
    // 0x217b88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217B8Cu;
    {
        const bool branch_taken_0x217b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b8c) {
            ctx->pc = 0x217BB0u;
            goto label_217bb0;
        }
    }
    ctx->pc = 0x217B94u;
    // 0x217b94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x217b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217b98: 0xc085f4c  jal         func_217D30
    ctx->pc = 0x217B98u;
    SET_GPR_U32(ctx, 31, 0x217BA0u);
    ctx->pc = 0x217D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D30u, 0x217B98u, 0x217BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA0u;
label_217ba0:
    // 0x217ba0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x217ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217ba4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x217BA4u;
    SET_GPR_U32(ctx, 31, 0x217BACu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x217BA4u, 0x217BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BACu;
label_217bac:
    // 0x217bac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x217bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_217bb0:
    // 0x217bb0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x217bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_217bb4:
    // 0x217bb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217bb8: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217bbc: 0xc085f44  jal         func_217D10
    ctx->pc = 0x217BBCu;
    SET_GPR_U32(ctx, 31, 0x217BC4u);
    ctx->pc = 0x217D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D10u, 0x217BBCu, 0x217BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BC4u;
label_217bc4:
    // 0x217bc4: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x217BC4u;
    {
        const bool branch_taken_0x217bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x217bc4) {
            ctx->pc = 0x217B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217b88;
        }
    }
    ctx->pc = 0x217BCCu;
    // 0x217bcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217bd0: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217bd4: 0xc085f00  jal         func_217C00
    ctx->pc = 0x217BD4u;
    SET_GPR_U32(ctx, 31, 0x217BDCu);
    ctx->pc = 0x217C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217C00u, 0x217BD4u, 0x217BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BDCu;
label_217bdc:
    // 0x217bdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x217bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217bec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x217becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x217bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x217BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217BF8u;
    // 0x217bf8: 0x0  nop
    ctx->pc = 0x217bf8u;
    // NOP
    // 0x217bfc: 0x0  nop
    ctx->pc = 0x217bfcu;
    // NOP
    ctx->pc = 0x217c00u;
}
