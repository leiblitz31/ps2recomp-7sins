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

// Function: sub_00187140
// Address: 0x187140 - 0x187220
void sub_00187140_0x187140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187140_0x187140");
#endif

    switch (ctx->pc) {
        case 0x187140u: goto label_187140;
        case 0x187144u: goto label_187144;
        case 0x187148u: goto label_187148;
        case 0x18714cu: goto label_18714c;
        case 0x187150u: goto label_187150;
        case 0x187154u: goto label_187154;
        case 0x187158u: goto label_187158;
        case 0x18715cu: goto label_18715c;
        case 0x187160u: goto label_187160;
        case 0x187164u: goto label_187164;
        case 0x187168u: goto label_187168;
        case 0x18716cu: goto label_18716c;
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        case 0x187190u: goto label_187190;
        case 0x187194u: goto label_187194;
        case 0x187198u: goto label_187198;
        case 0x18719cu: goto label_18719c;
        case 0x1871a0u: goto label_1871a0;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871a8u: goto label_1871a8;
        case 0x1871acu: goto label_1871ac;
        case 0x1871b0u: goto label_1871b0;
        case 0x1871b4u: goto label_1871b4;
        case 0x1871b8u: goto label_1871b8;
        case 0x1871bcu: goto label_1871bc;
        case 0x1871c0u: goto label_1871c0;
        case 0x1871c4u: goto label_1871c4;
        case 0x1871c8u: goto label_1871c8;
        case 0x1871ccu: goto label_1871cc;
        case 0x1871d0u: goto label_1871d0;
        case 0x1871d4u: goto label_1871d4;
        case 0x1871d8u: goto label_1871d8;
        case 0x1871dcu: goto label_1871dc;
        case 0x1871e0u: goto label_1871e0;
        case 0x1871e4u: goto label_1871e4;
        case 0x1871e8u: goto label_1871e8;
        case 0x1871ecu: goto label_1871ec;
        case 0x1871f0u: goto label_1871f0;
        case 0x1871f4u: goto label_1871f4;
        case 0x1871f8u: goto label_1871f8;
        case 0x1871fcu: goto label_1871fc;
        case 0x187200u: goto label_187200;
        case 0x187204u: goto label_187204;
        case 0x187208u: goto label_187208;
        case 0x18720cu: goto label_18720c;
        case 0x187210u: goto label_187210;
        case 0x187214u: goto label_187214;
        case 0x187218u: goto label_187218;
        case 0x18721cu: goto label_18721c;
        default: break;
    }

    ctx->pc = 0x187140u;

label_187140:
    // 0x187140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187144:
    // 0x187144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_187148:
    // 0x187148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_18714c:
    // 0x18714c: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_187150:
    // 0x187150: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_187154:
    if (ctx->pc == 0x187154u) {
        ctx->pc = 0x187158u;
        goto label_187158;
    }
    ctx->pc = 0x187150u;
    {
        const bool branch_taken_0x187150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187150) {
            ctx->pc = 0x187178u;
            goto label_187178;
        }
    }
    ctx->pc = 0x187158u;
label_187158:
    // 0x187158: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_18715c:
    // 0x18715c: 0xc04e308  jal         func_138C20
label_187160:
    if (ctx->pc == 0x187160u) {
        ctx->pc = 0x187164u;
        goto label_187164;
    }
    ctx->pc = 0x18715Cu;
    SET_GPR_U32(ctx, 31, 0x187164u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x18715Cu, 0x187164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187164u;
label_187164:
    // 0x187164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_187168:
    if (ctx->pc == 0x187168u) {
        ctx->pc = 0x18716Cu;
        goto label_18716c;
    }
    ctx->pc = 0x187164u;
    {
        const bool branch_taken_0x187164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187164) {
            ctx->pc = 0x187178u;
            goto label_187178;
        }
    }
    ctx->pc = 0x18716Cu;
label_18716c:
    // 0x18716c: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x18716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_187170:
    // 0x187170: 0xc04e558  jal         func_139560
label_187174:
    if (ctx->pc == 0x187174u) {
        ctx->pc = 0x187178u;
        goto label_187178;
    }
    ctx->pc = 0x187170u;
    SET_GPR_U32(ctx, 31, 0x187178u);
    ctx->pc = 0x139560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139560u, 0x187170u, 0x187178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187178u;
label_187178:
    // 0x187178: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18717c:
    // 0x18717c: 0xc088560  jal         func_221580
label_187180:
    if (ctx->pc == 0x187180u) {
        ctx->pc = 0x187184u;
        goto label_187184;
    }
    ctx->pc = 0x18717Cu;
    SET_GPR_U32(ctx, 31, 0x187184u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x18717Cu, 0x187184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187184u;
label_187184:
    // 0x187184: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_187188:
    // 0x187188: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18718c:
    // 0x18718c: 0x24a55180  addiu       $a1, $a1, 0x5180
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20864));
label_187190:
    // 0x187190: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_187194:
    // 0x187194: 0xc041b24  jal         func_106C90
label_187198:
    if (ctx->pc == 0x187198u) {
        ctx->pc = 0x18719Cu;
        goto label_18719c;
    }
    ctx->pc = 0x187194u;
    SET_GPR_U32(ctx, 31, 0x18719Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x187194u, 0x18719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18719Cu;
label_18719c:
    // 0x18719c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1871a0:
    // 0x1871a0: 0x27859188  addiu       $a1, $gp, -0x6E78
    ctx->pc = 0x1871a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939016));
label_1871a4:
    // 0x1871a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1871a8:
    // 0x1871a8: 0xc047314  jal         func_11CC50
label_1871ac:
    if (ctx->pc == 0x1871ACu) {
        ctx->pc = 0x1871B0u;
        goto label_1871b0;
    }
    ctx->pc = 0x1871A8u;
    SET_GPR_U32(ctx, 31, 0x1871B0u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x1871A8u, 0x1871B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871B0u;
label_1871b0:
    // 0x1871b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1871b4:
    // 0x1871b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1871b8:
    // 0x1871b8: 0xc08ef28  jal         func_23BCA0
label_1871bc:
    if (ctx->pc == 0x1871BCu) {
        ctx->pc = 0x1871C0u;
        goto label_1871c0;
    }
    ctx->pc = 0x1871B8u;
    SET_GPR_U32(ctx, 31, 0x1871C0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1871B8u, 0x1871C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871C0u;
label_1871c0:
    // 0x1871c0: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1871c4:
    // 0x1871c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1871c8:
    // 0x1871c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1871c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1871cc:
    // 0x1871cc: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1871d0:
    // 0x1871d0: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x1871d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_1871d4:
    // 0x1871d4: 0xc041bc4  jal         func_106F10
label_1871d8:
    if (ctx->pc == 0x1871D8u) {
        ctx->pc = 0x1871DCu;
        goto label_1871dc;
    }
    ctx->pc = 0x1871D4u;
    SET_GPR_U32(ctx, 31, 0x1871DCu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1871D4u, 0x1871DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871DCu;
label_1871dc:
    // 0x1871dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1871dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1871e0:
    // 0x1871e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1871e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1871e4:
    // 0x1871e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1871e8:
    // 0x1871e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1871ec:
    // 0x1871ec: 0x320f809  jalr        $t9
label_1871f0:
    if (ctx->pc == 0x1871F0u) {
        ctx->pc = 0x1871F4u;
        goto label_1871f4;
    }
    ctx->pc = 0x1871ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1871F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1871ECu, 0x1871F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1871F4u;
label_1871f4:
    // 0x1871f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1871f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1871f8:
    // 0x1871f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1871fc:
    // 0x1871fc: 0xc0887b4  jal         func_221ED0
label_187200:
    if (ctx->pc == 0x187200u) {
        ctx->pc = 0x187204u;
        goto label_187204;
    }
    ctx->pc = 0x1871FCu;
    SET_GPR_U32(ctx, 31, 0x187204u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1871FCu, 0x187204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187204u;
label_187204:
    // 0x187204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187208:
    // 0x187208: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18720c:
    // 0x18720c: 0x3e00008  jr          $ra
label_187210:
    if (ctx->pc == 0x187210u) {
        ctx->pc = 0x187214u;
        goto label_187214;
    }
    ctx->pc = 0x18720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187214u;
label_187214:
    // 0x187214: 0x0  nop
    ctx->pc = 0x187214u;
    // NOP
label_187218:
    // 0x187218: 0x0  nop
    ctx->pc = 0x187218u;
    // NOP
label_18721c:
    // 0x18721c: 0x0  nop
    ctx->pc = 0x18721cu;
    // NOP
    ctx->pc = 0x187220u;
}
