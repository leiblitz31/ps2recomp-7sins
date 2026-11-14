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

// Function: sub_002A10E0
// Address: 0x2a10e0 - 0x2a1210
void sub_002A10E0_0x2a10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A10E0_0x2a10e0");
#endif

    switch (ctx->pc) {
        case 0x2a113cu: goto label_2a113c;
        case 0x2a1168u: goto label_2a1168;
        case 0x2a1190u: goto label_2a1190;
        default: break;
    }

    ctx->pc = 0x2a10e0u;

    // 0x2a10e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a10e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a10e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a10e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a10ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a10f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a10f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a10f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a10fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1100: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1104: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a110c: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x2a110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1110: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A1110u;
    {
        const bool branch_taken_0x2a1110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1110) {
            ctx->pc = 0x2A11F8u;
            goto label_2a11f8;
        }
    }
    ctx->pc = 0x2A1118u;
    // 0x2a1118: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a111c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1120: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1124: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1128: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a112c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1130: 0x8c4401c4  lw          $a0, 0x1C4($v0)
    ctx->pc = 0x2a1130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1134: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2A1134u;
    SET_GPR_U32(ctx, 31, 0x2A113Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2A1134u, 0x2A113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A113Cu;
label_2a113c:
    // 0x2a113c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a113cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1140: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a1140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1144: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1148: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a114c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1150: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a115c: 0x8c4501c4  lw          $a1, 0x1C4($v0)
    ctx->pc = 0x2a115cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1160: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x2A1160u;
    SET_GPR_U32(ctx, 31, 0x2A1168u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x2A1160u, 0x2A1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1168u;
label_2a1168:
    // 0x2a1168: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a1168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a116c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1170: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1174: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1178: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a117c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1180: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1184: 0x8c4501c4  lw          $a1, 0x1C4($v0)
    ctx->pc = 0x2a1184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1188: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A1188u;
    SET_GPR_U32(ctx, 31, 0x2A1190u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A1188u, 0x2A1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1190u;
label_2a1190:
    // 0x2a1190: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1194: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1198: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a119c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a11a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a11a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11a8: 0xac4001c4  sw          $zero, 0x1C4($v0)
    ctx->pc = 0x2a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 0));
    // 0x2a11ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a11b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a11b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a11bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a11c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11c4: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2a11c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a11c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a11cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a11d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a11d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a11dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11e0: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a11e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a11e8: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
    // 0x2a11ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a11f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A11F0u;
    {
        const bool branch_taken_0x2a11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a11f0) {
            ctx->pc = 0x2A11FCu;
            goto label_2a11fc;
        }
    }
    ctx->pc = 0x2A11F8u;
label_2a11f8:
    // 0x2a11f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a11f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a11fc:
    // 0x2a11fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a11fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1204: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a1204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1208: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1210u;
}
