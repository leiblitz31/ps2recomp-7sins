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

// Function: sub_0018CB80
// Address: 0x18cb80 - 0x18cc10
void sub_0018CB80_0x18cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CB80_0x18cb80");
#endif

    switch (ctx->pc) {
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbfcu: goto label_18cbfc;
        default: break;
    }

    ctx->pc = 0x18cb80u;

    // 0x18cb80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18cb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cb88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18cb8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18cb90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cb94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cb98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cb9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18cba0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18CBA0u;
    {
        const bool branch_taken_0x18cba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cba0) {
            ctx->pc = 0x18CBD4u;
            goto label_18cbd4;
        }
    }
    ctx->pc = 0x18CBA8u;
    // 0x18cba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cbac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cbb0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cbb4: 0xc0633e0  jal         func_18CF80
    ctx->pc = 0x18CBB4u;
    SET_GPR_U32(ctx, 31, 0x18CBBCu);
    ctx->pc = 0x18CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF80u, 0x18CBB4u, 0x18CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBBCu;
label_18cbbc:
    // 0x18cbbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cbc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18cbc4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18cbc8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x18cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x18cbcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18CBCCu;
    {
        const bool branch_taken_0x18cbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbcc) {
            ctx->pc = 0x18CBFCu;
            goto label_18cbfc;
        }
    }
    ctx->pc = 0x18CBD4u;
label_18cbd4:
    // 0x18cbd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cbd8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x18cbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cbdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cbe0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cbe4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x18cbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cbe8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18cbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18cbec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18cbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbf0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x18cbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbf4: 0xc063304  jal         func_18CC10
    ctx->pc = 0x18CBF4u;
    SET_GPR_U32(ctx, 31, 0x18CBFCu);
    ctx->pc = 0x18CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC10u, 0x18CBF4u, 0x18CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBFCu;
label_18cbfc:
    // 0x18cbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cc00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cc04: 0x3e00008  jr          $ra
    ctx->pc = 0x18CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CC0Cu;
    // 0x18cc0c: 0x0  nop
    ctx->pc = 0x18cc0cu;
    // NOP
    ctx->pc = 0x18cc10u;
}
