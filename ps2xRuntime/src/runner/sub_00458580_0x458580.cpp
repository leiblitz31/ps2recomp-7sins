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

// Function: sub_00458580
// Address: 0x458580 - 0x458640
void sub_00458580_0x458580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458580_0x458580");
#endif

    switch (ctx->pc) {
        case 0x4585b4u: goto label_4585b4;
        case 0x4585c4u: goto label_4585c4;
        case 0x4585dcu: goto label_4585dc;
        case 0x4585f0u: goto label_4585f0;
        case 0x45860cu: goto label_45860c;
        default: break;
    }

    ctx->pc = 0x458580u;

    // 0x458580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x458580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x458584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x458584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x458588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x458588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45858c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x458590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458594: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x458594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x458598: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x458598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x45859c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4585a4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x4585a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4585a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4585a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585ac: 0xc1162a0  jal         func_458A80
    ctx->pc = 0x4585ACu;
    SET_GPR_U32(ctx, 31, 0x4585B4u);
    ctx->pc = 0x458A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458A80u, 0x4585ACu, 0x4585B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4585B4u;
label_4585b4:
    // 0x4585b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4585b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585b8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4585b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4585bc: 0xc1161d8  jal         func_458760
    ctx->pc = 0x4585BCu;
    SET_GPR_U32(ctx, 31, 0x4585C4u);
    ctx->pc = 0x458760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458760u, 0x4585BCu, 0x4585C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4585C4u;
label_4585c4:
    // 0x4585c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4585c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4585c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4585c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585cc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4585ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4585d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4585d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4585d4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4585D4u;
    SET_GPR_U32(ctx, 31, 0x4585DCu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4585D4u, 0x4585DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4585DCu;
label_4585dc:
    // 0x4585dc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4585dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4585e0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4585e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585e4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4585e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4585e8: 0xc116190  jal         func_458640
    ctx->pc = 0x4585E8u;
    SET_GPR_U32(ctx, 31, 0x4585F0u);
    ctx->pc = 0x458640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458640u, 0x4585E8u, 0x4585F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4585F0u;
label_4585f0:
    // 0x4585f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4585f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4585f4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x4585f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x4585f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4585f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4585fc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4585fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x458600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458604: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458604u;
    SET_GPR_U32(ctx, 31, 0x45860Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458604u, 0x45860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45860Cu;
label_45860c:
    // 0x45860c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x45860cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x458610: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x458610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458614: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x458614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x458618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x458618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x45861c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x45861cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x458620: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x458620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x458624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x458624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x458628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45862c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45862cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x458634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x458638: 0x3e00008  jr          $ra
    ctx->pc = 0x458638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458640u;
}
