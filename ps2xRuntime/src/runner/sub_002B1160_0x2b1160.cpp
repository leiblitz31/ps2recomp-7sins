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

// Function: sub_002B1160
// Address: 0x2b1160 - 0x2b11d0
void sub_002B1160_0x2b1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1160_0x2b1160");
#endif

    switch (ctx->pc) {
        case 0x2b1160u: goto label_2b1160;
        case 0x2b1164u: goto label_2b1164;
        case 0x2b1168u: goto label_2b1168;
        case 0x2b116cu: goto label_2b116c;
        case 0x2b1170u: goto label_2b1170;
        case 0x2b1174u: goto label_2b1174;
        case 0x2b1178u: goto label_2b1178;
        case 0x2b117cu: goto label_2b117c;
        case 0x2b1180u: goto label_2b1180;
        case 0x2b1184u: goto label_2b1184;
        case 0x2b1188u: goto label_2b1188;
        case 0x2b118cu: goto label_2b118c;
        case 0x2b1190u: goto label_2b1190;
        case 0x2b1194u: goto label_2b1194;
        case 0x2b1198u: goto label_2b1198;
        case 0x2b119cu: goto label_2b119c;
        case 0x2b11a0u: goto label_2b11a0;
        case 0x2b11a4u: goto label_2b11a4;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11acu: goto label_2b11ac;
        case 0x2b11b0u: goto label_2b11b0;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11b8u: goto label_2b11b8;
        case 0x2b11bcu: goto label_2b11bc;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11c4u: goto label_2b11c4;
        case 0x2b11c8u: goto label_2b11c8;
        case 0x2b11ccu: goto label_2b11cc;
        default: break;
    }

    ctx->pc = 0x2b1160u;

label_2b1160:
    // 0x2b1160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b1164:
    // 0x2b1164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b1168:
    // 0x2b1168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b116c:
    // 0x2b116c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b116cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2b1170:
    // 0x2b1170: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b1170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2b1174:
    // 0x2b1174: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b1174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2b1178:
    // 0x2b1178: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2b1178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2b117c:
    // 0x2b117c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1180:
    // 0x2b1180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1184:
    // 0x2b1184: 0xc0ac474  jal         func_2B11D0
label_2b1188:
    if (ctx->pc == 0x2B1188u) {
        ctx->pc = 0x2B118Cu;
        goto label_2b118c;
    }
    ctx->pc = 0x2B1184u;
    SET_GPR_U32(ctx, 31, 0x2B118Cu);
    ctx->pc = 0x2B11D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B11D0u, 0x2B1184u, 0x2B118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B118Cu;
label_2b118c:
    // 0x2b118c: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
label_2b1190:
    // 0x2b1190: 0x26100a70  addiu       $s0, $s0, 0xA70
    ctx->pc = 0x2b1190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
label_2b1194:
    // 0x2b1194: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2b1194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2b1198:
    // 0x2b1198: 0x200f809  jalr        $s0
label_2b119c:
    if (ctx->pc == 0x2B119Cu) {
        ctx->pc = 0x2B11A0u;
        goto label_2b11a0;
    }
    ctx->pc = 0x2B1198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2B11A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1198u, 0x2B11A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B11A0u;
label_2b11a0:
    // 0x2b11a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b11a4:
    // 0x2b11a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b11a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b11a8:
    // 0x2b11a8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2b11a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b11ac:
    // 0x2b11ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b11acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2b11b0:
    // 0x2b11b0: 0xc0ab584  jal         func_2AD610
label_2b11b4:
    if (ctx->pc == 0x2B11B4u) {
        ctx->pc = 0x2B11B8u;
        goto label_2b11b8;
    }
    ctx->pc = 0x2B11B0u;
    SET_GPR_U32(ctx, 31, 0x2B11B8u);
    ctx->pc = 0x2AD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD610u, 0x2B11B0u, 0x2B11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11B8u;
label_2b11b8:
    // 0x2b11b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b11b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b11bc:
    // 0x2b11bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b11bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b11c0:
    // 0x2b11c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b11c4:
    // 0x2b11c4: 0x3e00008  jr          $ra
label_2b11c8:
    if (ctx->pc == 0x2B11C8u) {
        ctx->pc = 0x2B11CCu;
        goto label_2b11cc;
    }
    ctx->pc = 0x2B11C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B11C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B11CCu;
label_2b11cc:
    // 0x2b11cc: 0x0  nop
    ctx->pc = 0x2b11ccu;
    // NOP
    ctx->pc = 0x2b11d0u;
}
