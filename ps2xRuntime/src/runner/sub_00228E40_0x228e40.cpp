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

// Function: sub_00228E40
// Address: 0x228e40 - 0x228ed0
void sub_00228E40_0x228e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228E40_0x228e40");
#endif

    switch (ctx->pc) {
        case 0x228e7cu: goto label_228e7c;
        case 0x228ebcu: goto label_228ebc;
        default: break;
    }

    ctx->pc = 0x228e40u;

    // 0x228e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228e48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x228e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x228e4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x228e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x228e50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x228e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228e58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x228e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x228e60: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228E60u;
    {
        const bool branch_taken_0x228e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228e60) {
            ctx->pc = 0x228E94u;
            goto label_228e94;
        }
    }
    ctx->pc = 0x228E68u;
    // 0x228e68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x228e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228e70: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x228e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228e74: 0xc08a490  jal         func_229240
    ctx->pc = 0x228E74u;
    SET_GPR_U32(ctx, 31, 0x228E7Cu);
    ctx->pc = 0x229240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229240u, 0x228E74u, 0x228E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E7Cu;
label_228e7c:
    // 0x228e7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x228e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x228e84: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x228e88: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x228e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x228e8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x228E8Cu;
    {
        const bool branch_taken_0x228e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e8c) {
            ctx->pc = 0x228EBCu;
            goto label_228ebc;
        }
    }
    ctx->pc = 0x228E94u;
label_228e94:
    // 0x228e94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e98: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x228e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x228e9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ea0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228ea4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228ea8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x228ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x228eac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228eb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x228eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228eb4: 0xc08a3b4  jal         func_228ED0
    ctx->pc = 0x228EB4u;
    SET_GPR_U32(ctx, 31, 0x228EBCu);
    ctx->pc = 0x228ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228ED0u, 0x228EB4u, 0x228EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EBCu;
label_228ebc:
    // 0x228ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228ec0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x228ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x228ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x228EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228ECCu;
    // 0x228ecc: 0x0  nop
    ctx->pc = 0x228eccu;
    // NOP
    ctx->pc = 0x228ed0u;
}
