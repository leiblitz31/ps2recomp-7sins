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

// Function: sub_00146140
// Address: 0x146140 - 0x146220
void sub_00146140_0x146140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146140_0x146140");
#endif

    switch (ctx->pc) {
        case 0x146140u: goto label_146140;
        case 0x146144u: goto label_146144;
        case 0x146148u: goto label_146148;
        case 0x14614cu: goto label_14614c;
        case 0x146150u: goto label_146150;
        case 0x146154u: goto label_146154;
        case 0x146158u: goto label_146158;
        case 0x14615cu: goto label_14615c;
        case 0x146160u: goto label_146160;
        case 0x146164u: goto label_146164;
        case 0x146168u: goto label_146168;
        case 0x14616cu: goto label_14616c;
        case 0x146170u: goto label_146170;
        case 0x146174u: goto label_146174;
        case 0x146178u: goto label_146178;
        case 0x14617cu: goto label_14617c;
        case 0x146180u: goto label_146180;
        case 0x146184u: goto label_146184;
        case 0x146188u: goto label_146188;
        case 0x14618cu: goto label_14618c;
        case 0x146190u: goto label_146190;
        case 0x146194u: goto label_146194;
        case 0x146198u: goto label_146198;
        case 0x14619cu: goto label_14619c;
        case 0x1461a0u: goto label_1461a0;
        case 0x1461a4u: goto label_1461a4;
        case 0x1461a8u: goto label_1461a8;
        case 0x1461acu: goto label_1461ac;
        case 0x1461b0u: goto label_1461b0;
        case 0x1461b4u: goto label_1461b4;
        case 0x1461b8u: goto label_1461b8;
        case 0x1461bcu: goto label_1461bc;
        case 0x1461c0u: goto label_1461c0;
        case 0x1461c4u: goto label_1461c4;
        case 0x1461c8u: goto label_1461c8;
        case 0x1461ccu: goto label_1461cc;
        case 0x1461d0u: goto label_1461d0;
        case 0x1461d4u: goto label_1461d4;
        case 0x1461d8u: goto label_1461d8;
        case 0x1461dcu: goto label_1461dc;
        case 0x1461e0u: goto label_1461e0;
        case 0x1461e4u: goto label_1461e4;
        case 0x1461e8u: goto label_1461e8;
        case 0x1461ecu: goto label_1461ec;
        case 0x1461f0u: goto label_1461f0;
        case 0x1461f4u: goto label_1461f4;
        case 0x1461f8u: goto label_1461f8;
        case 0x1461fcu: goto label_1461fc;
        case 0x146200u: goto label_146200;
        case 0x146204u: goto label_146204;
        case 0x146208u: goto label_146208;
        case 0x14620cu: goto label_14620c;
        case 0x146210u: goto label_146210;
        case 0x146214u: goto label_146214;
        case 0x146218u: goto label_146218;
        case 0x14621cu: goto label_14621c;
        default: break;
    }

    ctx->pc = 0x146140u;

label_146140:
    // 0x146140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_146144:
    // 0x146144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_146148:
    // 0x146148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14614c:
    // 0x14614c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14614cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_146150:
    // 0x146150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_146154:
    // 0x146154: 0xc051704  jal         func_145C10
label_146158:
    if (ctx->pc == 0x146158u) {
        ctx->pc = 0x14615Cu;
        goto label_14615c;
    }
    ctx->pc = 0x146154u;
    SET_GPR_U32(ctx, 31, 0x14615Cu);
    ctx->pc = 0x145C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C10u, 0x146154u, 0x14615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14615Cu;
label_14615c:
    // 0x14615c: 0xc05548c  jal         func_155230
label_146160:
    if (ctx->pc == 0x146160u) {
        ctx->pc = 0x146164u;
        goto label_146164;
    }
    ctx->pc = 0x14615Cu;
    SET_GPR_U32(ctx, 31, 0x146164u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x14615Cu, 0x146164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146164u;
label_146164:
    // 0x146164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146168:
    // 0x146168: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x146168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_14616c:
    // 0x14616c: 0xc0553d4  jal         func_154F50
label_146170:
    if (ctx->pc == 0x146170u) {
        ctx->pc = 0x146174u;
        goto label_146174;
    }
    ctx->pc = 0x14616Cu;
    SET_GPR_U32(ctx, 31, 0x146174u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x14616Cu, 0x146174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146174u;
label_146174:
    // 0x146174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146178:
    // 0x146178: 0xc05cf44  jal         func_173D10
label_14617c:
    if (ctx->pc == 0x14617Cu) {
        ctx->pc = 0x146180u;
        goto label_146180;
    }
    ctx->pc = 0x146178u;
    SET_GPR_U32(ctx, 31, 0x146180u);
    ctx->pc = 0x173D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D10u, 0x146178u, 0x146180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0xc05548c  jal         func_155230
label_146184:
    if (ctx->pc == 0x146184u) {
        ctx->pc = 0x146188u;
        goto label_146188;
    }
    ctx->pc = 0x146180u;
    SET_GPR_U32(ctx, 31, 0x146188u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x146180u, 0x146188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146188u;
label_146188:
    // 0x146188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14618c:
    // 0x14618c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_146190:
    // 0x146190: 0xc0553d4  jal         func_154F50
label_146194:
    if (ctx->pc == 0x146194u) {
        ctx->pc = 0x146198u;
        goto label_146198;
    }
    ctx->pc = 0x146190u;
    SET_GPR_U32(ctx, 31, 0x146198u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x146190u, 0x146198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146198u;
label_146198:
    // 0x146198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14619c:
    // 0x14619c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14619cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1461a0:
    // 0x1461a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1461a4:
    // 0x1461a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1461a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1461a8:
    // 0x1461a8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1461ac:
    // 0x1461ac: 0x320f809  jalr        $t9
label_1461b0:
    if (ctx->pc == 0x1461B0u) {
        ctx->pc = 0x1461B4u;
        goto label_1461b4;
    }
    ctx->pc = 0x1461ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1461B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461ACu, 0x1461B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1461B4u;
label_1461b4:
    // 0x1461b4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1461b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1461b8:
    // 0x1461b8: 0xc047eb8  jal         func_11FAE0
label_1461bc:
    if (ctx->pc == 0x1461BCu) {
        ctx->pc = 0x1461C0u;
        goto label_1461c0;
    }
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1461B8u, 0x1461C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1461c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1461c4:
    // 0x1461c4: 0xc047eb0  jal         func_11FAC0
label_1461c8:
    if (ctx->pc == 0x1461C8u) {
        ctx->pc = 0x1461CCu;
        goto label_1461cc;
    }
    ctx->pc = 0x1461C4u;
    SET_GPR_U32(ctx, 31, 0x1461CCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1461C4u, 0x1461CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461CCu;
label_1461cc:
    // 0x1461cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1461ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1461d0:
    // 0x1461d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1461d4:
    // 0x1461d4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_1461d8:
    // 0x1461d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1461d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1461dc:
    // 0x1461dc: 0xc049b80  jal         func_126E00
label_1461e0:
    if (ctx->pc == 0x1461E0u) {
        ctx->pc = 0x1461E4u;
        goto label_1461e4;
    }
    ctx->pc = 0x1461DCu;
    SET_GPR_U32(ctx, 31, 0x1461E4u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x1461DCu, 0x1461E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461E4u;
label_1461e4:
    // 0x1461e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1461e8:
    // 0x1461e8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1461ec:
    // 0x1461ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1461f0:
    if (ctx->pc == 0x1461F0u) {
        ctx->pc = 0x1461F4u;
        goto label_1461f4;
    }
    ctx->pc = 0x1461ECu;
    {
        const bool branch_taken_0x1461ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461ec) {
            ctx->pc = 0x146204u;
            goto label_146204;
        }
    }
    ctx->pc = 0x1461F4u;
label_1461f4:
    // 0x1461f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1461f8:
    // 0x1461f8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1461fc:
    // 0x1461fc: 0xc04da8c  jal         func_136A30
label_146200:
    if (ctx->pc == 0x146200u) {
        ctx->pc = 0x146204u;
        goto label_146204;
    }
    ctx->pc = 0x1461FCu;
    SET_GPR_U32(ctx, 31, 0x146204u);
    ctx->pc = 0x136A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A30u, 0x1461FCu, 0x146204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146204u;
label_146204:
    // 0x146204: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_146208:
    // 0x146208: 0xaf838c90  sw          $v1, -0x7370($gp)
    ctx->pc = 0x146208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 3));
label_14620c:
    // 0x14620c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_146210:
    // 0x146210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_146214:
    // 0x146214: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_146218:
    // 0x146218: 0x3e00008  jr          $ra
label_14621c:
    if (ctx->pc == 0x14621Cu) {
        ctx->pc = 0x146220u;
        goto label_fallthrough_0x146218;
    }
    ctx->pc = 0x146218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x146218:
    ctx->pc = 0x146220u;
}
