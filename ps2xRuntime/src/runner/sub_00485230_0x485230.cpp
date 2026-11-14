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

// Function: sub_00485230
// Address: 0x485230 - 0x4852f0
void sub_00485230_0x485230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485230_0x485230");
#endif

    switch (ctx->pc) {
        case 0x485264u: goto label_485264;
        case 0x485274u: goto label_485274;
        case 0x48528cu: goto label_48528c;
        case 0x4852a0u: goto label_4852a0;
        case 0x4852bcu: goto label_4852bc;
        default: break;
    }

    ctx->pc = 0x485230u;

    // 0x485230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x485234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x485234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x485238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48523c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x485240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x485244: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x485244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x485248: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x485248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x48524c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485250: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x485250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x485254: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x485254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x485258: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x485258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48525c: 0xc121530  jal         func_4854C0
    ctx->pc = 0x48525Cu;
    SET_GPR_U32(ctx, 31, 0x485264u);
    ctx->pc = 0x4854C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4854C0u, 0x48525Cu, 0x485264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485264u;
label_485264:
    // 0x485264: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x485264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485268: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x485268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48526c: 0xc0a0978  jal         func_2825E0
    ctx->pc = 0x48526Cu;
    SET_GPR_U32(ctx, 31, 0x485274u);
    ctx->pc = 0x2825E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2825E0u, 0x48526Cu, 0x485274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485274u;
label_485274:
    // 0x485274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485278: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x485278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48527c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x485280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485284: 0xc04e51c  jal         func_139470
    ctx->pc = 0x485284u;
    SET_GPR_U32(ctx, 31, 0x48528Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x485284u, 0x48528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48528Cu;
label_48528c:
    // 0x48528c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x48528cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485290: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x485290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485294: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x485294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x485298: 0xc1214bc  jal         func_4852F0
    ctx->pc = 0x485298u;
    SET_GPR_U32(ctx, 31, 0x4852A0u);
    ctx->pc = 0x4852F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4852F0u, 0x485298u, 0x4852A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4852A0u;
label_4852a0:
    // 0x4852a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4852a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4852a4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x4852a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x4852a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4852a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4852ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4852acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4852b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4852b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4852b4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4852B4u;
    SET_GPR_U32(ctx, 31, 0x4852BCu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4852B4u, 0x4852BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4852BCu;
label_4852bc:
    // 0x4852bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4852bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x4852c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4852c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4852c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4852c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4852c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4852c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4852cc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4852ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x4852d0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x4852d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4852d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4852d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4852d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4852d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4852dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4852dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4852e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4852e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4852e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4852e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4852e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4852E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4852E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4852F0u;
}
