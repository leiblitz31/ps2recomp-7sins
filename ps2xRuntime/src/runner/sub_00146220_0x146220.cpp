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

// Function: sub_00146220
// Address: 0x146220 - 0x146320
void sub_00146220_0x146220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146220_0x146220");
#endif

    switch (ctx->pc) {
        case 0x146244u: goto label_146244;
        case 0x146260u: goto label_146260;
        case 0x146294u: goto label_146294;
        case 0x1462a4u: goto label_1462a4;
        case 0x1462c4u: goto label_1462c4;
        case 0x1462fcu: goto label_1462fc;
        default: break;
    }

    ctx->pc = 0x146220u;

    // 0x146220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x146224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14622c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146230: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x146230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x146234: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x146234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x146238: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x146238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14623c: 0xc051970  jal         func_1465C0
    ctx->pc = 0x14623Cu;
    SET_GPR_U32(ctx, 31, 0x146244u);
    ctx->pc = 0x1465C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1465C0u, 0x14623Cu, 0x146244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146244u;
label_146244:
    // 0x146244: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146248: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x146248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14624c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x14624Cu;
    {
        const bool branch_taken_0x14624c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14624c) {
            ctx->pc = 0x1462FCu;
            goto label_1462fc;
        }
    }
    ctx->pc = 0x146254u;
    // 0x146254: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x146254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146258: 0xc051960  jal         func_146580
    ctx->pc = 0x146258u;
    SET_GPR_U32(ctx, 31, 0x146260u);
    ctx->pc = 0x146580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146580u, 0x146258u, 0x146260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146260u;
label_146260:
    // 0x146260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x146260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x146264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14626c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14626Cu;
    {
        const bool branch_taken_0x14626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14626c) {
            ctx->pc = 0x1462ACu;
            goto label_1462ac;
        }
    }
    ctx->pc = 0x146274u;
    // 0x146274: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146278: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x146278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14627c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146280: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x146280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146284: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x146284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146288: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x146288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14628c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x14628Cu;
    SET_GPR_U32(ctx, 31, 0x146294u);
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x14628Cu, 0x146294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146294u;
label_146294:
    // 0x146294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146298: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14629c: 0xc0518dc  jal         func_146370
    ctx->pc = 0x14629Cu;
    SET_GPR_U32(ctx, 31, 0x1462A4u);
    ctx->pc = 0x146370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146370u, 0x14629Cu, 0x1462A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462A4u;
label_1462a4:
    // 0x1462a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1462A4u;
    {
        const bool branch_taken_0x1462a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1462a4) {
            ctx->pc = 0x1462C8u;
            goto label_1462c8;
        }
    }
    ctx->pc = 0x1462ACu;
label_1462ac:
    // 0x1462ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1462b0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1462b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1462b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1462b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1462b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462bc: 0xc051980  jal         func_146600
    ctx->pc = 0x1462BCu;
    SET_GPR_U32(ctx, 31, 0x1462C4u);
    ctx->pc = 0x146600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146600u, 0x1462BCu, 0x1462C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462C4u;
label_1462c4:
    // 0x1462c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1462c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1462c8:
    // 0x1462c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1462cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1462ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1462d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1462d4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1462d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1462d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1462dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1462e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1462e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1462e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1462e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1462e8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x1462e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1462ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1462ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1462f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1462f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462f4: 0xc0518c8  jal         func_146320
    ctx->pc = 0x1462F4u;
    SET_GPR_U32(ctx, 31, 0x1462FCu);
    ctx->pc = 0x146320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146320u, 0x1462F4u, 0x1462FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462FCu;
label_1462fc:
    // 0x1462fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1462fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146308: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x146308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14630c: 0x3e00008  jr          $ra
    ctx->pc = 0x14630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14630Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146314u;
    // 0x146314: 0x0  nop
    ctx->pc = 0x146314u;
    // NOP
    // 0x146318: 0x0  nop
    ctx->pc = 0x146318u;
    // NOP
    // 0x14631c: 0x0  nop
    ctx->pc = 0x14631cu;
    // NOP
    ctx->pc = 0x146320u;
}
