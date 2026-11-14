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

// Function: sub_00482030
// Address: 0x482030 - 0x482100
void sub_00482030_0x482030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482030_0x482030");
#endif

    switch (ctx->pc) {
        case 0x482094u: goto label_482094;
        case 0x4820a8u: goto label_4820a8;
        case 0x4820b8u: goto label_4820b8;
        case 0x4820d0u: goto label_4820d0;
        case 0x4820e0u: goto label_4820e0;
        default: break;
    }

    ctx->pc = 0x482030u;

    // 0x482030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x482030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x482034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482038: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x482038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48203c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x482040: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x482040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x482044: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x482044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x482048: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x482048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x48204c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482050: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x482050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482054: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x482054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482058: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x482058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48205c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482060: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482068: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x482068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48206c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48206cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x482070: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x482070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482074: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x482074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x482078: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x482078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48207c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x48207cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482080: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x482080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x482084: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x482084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x482088: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x482088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48208c: 0xc12088c  jal         func_482230
    ctx->pc = 0x48208Cu;
    SET_GPR_U32(ctx, 31, 0x482094u);
    ctx->pc = 0x482230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482230u, 0x48208Cu, 0x482094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482094u;
label_482094:
    // 0x482094: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x482094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482098: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x482098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48209c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4820a0: 0xc04e0fc  jal         func_1383F0
    ctx->pc = 0x4820A0u;
    SET_GPR_U32(ctx, 31, 0x4820A8u);
    ctx->pc = 0x1383F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383F0u, 0x4820A0u, 0x4820A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4820A8u;
label_4820a8:
    // 0x4820a8: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x4820a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x4820ac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4820acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4820b0: 0xc120884  jal         func_482210
    ctx->pc = 0x4820B0u;
    SET_GPR_U32(ctx, 31, 0x4820B8u);
    ctx->pc = 0x482210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482210u, 0x4820B0u, 0x4820B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4820B8u;
label_4820b8:
    // 0x4820b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4820b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4820bc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x4820bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4820c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4820c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4820c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4820c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4820c8: 0xc120868  jal         func_4821A0
    ctx->pc = 0x4820C8u;
    SET_GPR_U32(ctx, 31, 0x4820D0u);
    ctx->pc = 0x4821A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4821A0u, 0x4820C8u, 0x4820D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4820D0u;
label_4820d0:
    // 0x4820d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4820d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4820d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4820d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4820d8: 0xc120840  jal         func_482100
    ctx->pc = 0x4820D8u;
    SET_GPR_U32(ctx, 31, 0x4820E0u);
    ctx->pc = 0x482100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482100u, 0x4820D8u, 0x4820E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4820E0u;
label_4820e0:
    // 0x4820e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4820e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4820e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4820e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4820e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4820e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4820ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4820ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4820ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4820F4u;
    // 0x4820f4: 0x0  nop
    ctx->pc = 0x4820f4u;
    // NOP
    // 0x4820f8: 0x0  nop
    ctx->pc = 0x4820f8u;
    // NOP
    // 0x4820fc: 0x0  nop
    ctx->pc = 0x4820fcu;
    // NOP
    ctx->pc = 0x482100u;
}
