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

// Function: sub_001D6220
// Address: 0x1d6220 - 0x1d6290
void sub_001D6220_0x1d6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6220_0x1d6220");
#endif

    switch (ctx->pc) {
        case 0x1d6280u: goto label_1d6280;
        default: break;
    }

    ctx->pc = 0x1d6220u;

    // 0x1d6220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d622c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6230: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6234: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6234u;
    {
        const bool branch_taken_0x1d6234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6234) {
            ctx->pc = 0x1D6280u;
            goto label_1d6280;
        }
    }
    ctx->pc = 0x1D623Cu;
    // 0x1d623c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6240: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6248: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d624c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6254: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d625c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1d625cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1d6260: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6260u;
    {
        const bool branch_taken_0x1d6260 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d6260) {
            ctx->pc = 0x1D6270u;
            goto label_1d6270;
        }
    }
    ctx->pc = 0x1D6268u;
    // 0x1d6268: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1d6268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1d626c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1d626cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1d6270:
    // 0x1d6270: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1d6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d6274: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d6274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6278: 0xc044874  jal         func_1121D0
    ctx->pc = 0x1D6278u;
    SET_GPR_U32(ctx, 31, 0x1D6280u);
    ctx->pc = 0x1121D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1121D0u, 0x1D6278u, 0x1D6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6280u;
label_1d6280:
    // 0x1d6280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6284: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d6288: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6290u;
}
