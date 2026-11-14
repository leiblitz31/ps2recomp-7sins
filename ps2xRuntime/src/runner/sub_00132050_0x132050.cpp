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

// Function: sub_00132050
// Address: 0x132050 - 0x1320c0
void sub_00132050_0x132050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132050_0x132050");
#endif

    switch (ctx->pc) {
        case 0x132050u: goto label_132050;
        case 0x132054u: goto label_132054;
        case 0x132058u: goto label_132058;
        case 0x13205cu: goto label_13205c;
        case 0x132060u: goto label_132060;
        case 0x132064u: goto label_132064;
        case 0x132068u: goto label_132068;
        case 0x13206cu: goto label_13206c;
        case 0x132070u: goto label_132070;
        case 0x132074u: goto label_132074;
        case 0x132078u: goto label_132078;
        case 0x13207cu: goto label_13207c;
        case 0x132080u: goto label_132080;
        case 0x132084u: goto label_132084;
        case 0x132088u: goto label_132088;
        case 0x13208cu: goto label_13208c;
        case 0x132090u: goto label_132090;
        case 0x132094u: goto label_132094;
        case 0x132098u: goto label_132098;
        case 0x13209cu: goto label_13209c;
        case 0x1320a0u: goto label_1320a0;
        case 0x1320a4u: goto label_1320a4;
        case 0x1320a8u: goto label_1320a8;
        case 0x1320acu: goto label_1320ac;
        case 0x1320b0u: goto label_1320b0;
        case 0x1320b4u: goto label_1320b4;
        case 0x1320b8u: goto label_1320b8;
        case 0x1320bcu: goto label_1320bc;
        default: break;
    }

    ctx->pc = 0x132050u;

label_132050:
    // 0x132050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x132050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_132054:
    // 0x132054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132058:
    // 0x132058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13205c:
    // 0x13205c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_132060:
    // 0x132060: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x132060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_132064:
    // 0x132064: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x132064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_132068:
    // 0x132068: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_13206c:
    // 0x13206c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132070:
    // 0x132070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132074:
    // 0x132074: 0xc04c840  jal         func_132100
label_132078:
    if (ctx->pc == 0x132078u) {
        ctx->pc = 0x13207Cu;
        goto label_13207c;
    }
    ctx->pc = 0x132074u;
    SET_GPR_U32(ctx, 31, 0x13207Cu);
    ctx->pc = 0x132100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132100u, 0x132074u, 0x13207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13207Cu;
label_13207c:
    // 0x13207c: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x13207cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
label_132080:
    // 0x132080: 0x26101990  addiu       $s0, $s0, 0x1990
    ctx->pc = 0x132080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6544));
label_132084:
    // 0x132084: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x132084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_132088:
    // 0x132088: 0x200f809  jalr        $s0
label_13208c:
    if (ctx->pc == 0x13208Cu) {
        ctx->pc = 0x132090u;
        goto label_132090;
    }
    ctx->pc = 0x132088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x132090u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132088u, 0x132090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132090u;
label_132090:
    // 0x132090: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_132094:
    // 0x132094: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x132094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_132098:
    // 0x132098: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x132098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13209c:
    // 0x13209c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13209cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1320a0:
    // 0x1320a0: 0xc04c830  jal         func_1320C0
label_1320a4:
    if (ctx->pc == 0x1320A4u) {
        ctx->pc = 0x1320A8u;
        goto label_1320a8;
    }
    ctx->pc = 0x1320A0u;
    SET_GPR_U32(ctx, 31, 0x1320A8u);
    ctx->pc = 0x1320C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1320C0u, 0x1320A0u, 0x1320A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320A8u;
label_1320a8:
    // 0x1320a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1320a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1320ac:
    // 0x1320ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1320acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1320b0:
    // 0x1320b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1320b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1320b4:
    // 0x1320b4: 0x3e00008  jr          $ra
label_1320b8:
    if (ctx->pc == 0x1320B8u) {
        ctx->pc = 0x1320BCu;
        goto label_1320bc;
    }
    ctx->pc = 0x1320B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1320B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1320BCu;
label_1320bc:
    // 0x1320bc: 0x0  nop
    ctx->pc = 0x1320bcu;
    // NOP
    ctx->pc = 0x1320c0u;
}
