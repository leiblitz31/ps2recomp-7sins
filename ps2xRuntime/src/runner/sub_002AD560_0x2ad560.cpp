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

// Function: sub_002AD560
// Address: 0x2ad560 - 0x2ad5f0
void sub_002AD560_0x2ad560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD560_0x2ad560");
#endif

    switch (ctx->pc) {
        case 0x2ad588u: goto label_2ad588;
        case 0x2ad5b4u: goto label_2ad5b4;
        case 0x2ad5d4u: goto label_2ad5d4;
        default: break;
    }

    ctx->pc = 0x2ad560u;

    // 0x2ad560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad56c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ad56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2ad570: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ad570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2ad574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ad574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad578: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2ad578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ad57c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2ad57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad580: 0xc0ab550  jal         func_2AD540
    ctx->pc = 0x2AD580u;
    SET_GPR_U32(ctx, 31, 0x2AD588u);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2AD580u, 0x2AD588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD588u;
label_2ad588:
    // 0x2ad588: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD588u;
    {
        const bool branch_taken_0x2ad588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ad588) {
            ctx->pc = 0x2AD5B4u;
            goto label_2ad5b4;
        }
    }
    ctx->pc = 0x2AD590u;
    // 0x2ad590: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad594: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ad594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad598: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2ad598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad59c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2ad59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ad5a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ad5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad5a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2ad5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad5a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2ad5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ad5ac: 0xc0ab584  jal         func_2AD610
    ctx->pc = 0x2AD5ACu;
    SET_GPR_U32(ctx, 31, 0x2AD5B4u);
    ctx->pc = 0x2AD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD610u, 0x2AD5ACu, 0x2AD5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5B4u;
label_2ad5b4:
    // 0x2ad5b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad5b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ad5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ad5bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2ad5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2ad5c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2ad5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2ad5c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad5c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ad5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad5cc: 0xc0ab57c  jal         func_2AD5F0
    ctx->pc = 0x2AD5CCu;
    SET_GPR_U32(ctx, 31, 0x2AD5D4u);
    ctx->pc = 0x2AD5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD5F0u, 0x2AD5CCu, 0x2AD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5D4u;
label_2ad5d4:
    // 0x2ad5d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ad5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad5e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD5ECu;
    // 0x2ad5ec: 0x0  nop
    ctx->pc = 0x2ad5ecu;
    // NOP
    ctx->pc = 0x2ad5f0u;
}
