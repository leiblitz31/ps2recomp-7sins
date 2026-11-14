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

// Function: sub_00186190
// Address: 0x186190 - 0x186210
void sub_00186190_0x186190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186190_0x186190");
#endif

    switch (ctx->pc) {
        case 0x1861b4u: goto label_1861b4;
        case 0x1861f8u: goto label_1861f8;
        default: break;
    }

    ctx->pc = 0x186190u;

    // 0x186190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x186198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18619c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1861a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1861a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1861a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1861ac: 0xc060eac  jal         func_183AB0
    ctx->pc = 0x1861ACu;
    SET_GPR_U32(ctx, 31, 0x1861B4u);
    ctx->pc = 0x183AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AB0u, 0x1861ACu, 0x1861B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861B4u;
label_1861b4:
    // 0x1861b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1861b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1861bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1861c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1861c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1861c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1861cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1861ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1861d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1861d4: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x1861d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1861d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1861D8u;
    {
        const bool branch_taken_0x1861d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1861d8) {
            ctx->pc = 0x1861E8u;
            goto label_1861e8;
        }
    }
    ctx->pc = 0x1861E0u;
    // 0x1861e0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1861e4: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1861e8:
    // 0x1861e8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1861ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1861ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1861f0: 0xc061cf0  jal         func_1873C0
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C0u, 0x1861F0u, 0x1861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1861fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1861fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186200: 0x3e00008  jr          $ra
    ctx->pc = 0x186200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186208u;
    // 0x186208: 0x0  nop
    ctx->pc = 0x186208u;
    // NOP
    // 0x18620c: 0x0  nop
    ctx->pc = 0x18620cu;
    // NOP
    ctx->pc = 0x186210u;
}
