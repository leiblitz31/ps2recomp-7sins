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

// Function: sub_00223230
// Address: 0x223230 - 0x2232c0
void sub_00223230_0x223230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223230_0x223230");
#endif

    switch (ctx->pc) {
        case 0x22326cu: goto label_22326c;
        case 0x2232acu: goto label_2232ac;
        default: break;
    }

    ctx->pc = 0x223230u;

    // 0x223230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22323c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x223240: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x223244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223248: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22324c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x223250: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223250u;
    {
        const bool branch_taken_0x223250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x223250) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x223258u;
    // 0x223258: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22325c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223260: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223264: 0xc088d54  jal         func_223550
    ctx->pc = 0x223264u;
    SET_GPR_U32(ctx, 31, 0x22326Cu);
    ctx->pc = 0x223550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223550u, 0x223264u, 0x22326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22326Cu;
label_22326c:
    // 0x22326c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223270: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223274: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x223274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x223278: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x223278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22327c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22327Cu;
    {
        const bool branch_taken_0x22327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22327c) {
            ctx->pc = 0x2232ACu;
            goto label_2232ac;
        }
    }
    ctx->pc = 0x223284u;
label_223284:
    // 0x223284: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223288: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x223288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22328c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223290: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223294: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x223294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223298: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x223298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22329c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22329cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2232a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2232a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2232a4: 0xc088cb0  jal         func_2232C0
    ctx->pc = 0x2232A4u;
    SET_GPR_U32(ctx, 31, 0x2232ACu);
    ctx->pc = 0x2232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2232C0u, 0x2232A4u, 0x2232ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232ACu;
label_2232ac:
    // 0x2232ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2232acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2232b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2232b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2232b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2232B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2232B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2232BCu;
    // 0x2232bc: 0x0  nop
    ctx->pc = 0x2232bcu;
    // NOP
    ctx->pc = 0x2232c0u;
}
