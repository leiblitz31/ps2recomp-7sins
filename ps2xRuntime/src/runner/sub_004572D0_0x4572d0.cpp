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

// Function: sub_004572D0
// Address: 0x4572d0 - 0x4573a0
void sub_004572D0_0x4572d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004572D0_0x4572d0");
#endif

    switch (ctx->pc) {
        case 0x457334u: goto label_457334;
        case 0x457348u: goto label_457348;
        case 0x457358u: goto label_457358;
        case 0x457370u: goto label_457370;
        case 0x457380u: goto label_457380;
        default: break;
    }

    ctx->pc = 0x4572d0u;

    // 0x4572d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4572d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4572d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4572d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4572d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4572d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4572dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4572dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4572e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x4572e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x4572e4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x4572e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x4572e8: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x4572e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x4572ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4572f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4572f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4572f4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4572f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4572f8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4572f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4572fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4572fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457300: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x457300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x457304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x457304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x457308: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x457308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45730c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x45730cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x457310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x457310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457314: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x457314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x457318: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x457318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x45731c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x45731cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457320: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x457320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x457324: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x457324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x457328: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x457328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45732c: 0xc115d34  jal         func_4574D0
    ctx->pc = 0x45732Cu;
    SET_GPR_U32(ctx, 31, 0x457334u);
    ctx->pc = 0x4574D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4574D0u, 0x45732Cu, 0x457334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457334u;
label_457334:
    // 0x457334: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x457334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457338: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x457338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x45733c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45733cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457340: 0xc04e0fc  jal         func_1383F0
    ctx->pc = 0x457340u;
    SET_GPR_U32(ctx, 31, 0x457348u);
    ctx->pc = 0x1383F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383F0u, 0x457340u, 0x457348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457348u;
label_457348:
    // 0x457348: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x457348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x45734c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457350: 0xc115d2c  jal         func_4574B0
    ctx->pc = 0x457350u;
    SET_GPR_U32(ctx, 31, 0x457358u);
    ctx->pc = 0x4574B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4574B0u, 0x457350u, 0x457358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457358u;
label_457358:
    // 0x457358: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x457358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45735c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x45735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x457360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x457360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x457364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457368: 0xc115d10  jal         func_457440
    ctx->pc = 0x457368u;
    SET_GPR_U32(ctx, 31, 0x457370u);
    ctx->pc = 0x457440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457440u, 0x457368u, 0x457370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457370u;
label_457370:
    // 0x457370: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x457370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457374: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x457374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457378: 0xc115ce8  jal         func_4573A0
    ctx->pc = 0x457378u;
    SET_GPR_U32(ctx, 31, 0x457380u);
    ctx->pc = 0x4573A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4573A0u, 0x457378u, 0x457380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457380u;
label_457380:
    // 0x457380: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x457380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457388: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x457388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45738c: 0x3e00008  jr          $ra
    ctx->pc = 0x45738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457394u;
    // 0x457394: 0x0  nop
    ctx->pc = 0x457394u;
    // NOP
    // 0x457398: 0x0  nop
    ctx->pc = 0x457398u;
    // NOP
    // 0x45739c: 0x0  nop
    ctx->pc = 0x45739cu;
    // NOP
    ctx->pc = 0x4573a0u;
}
