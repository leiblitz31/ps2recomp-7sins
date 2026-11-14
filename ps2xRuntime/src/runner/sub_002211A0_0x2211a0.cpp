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

// Function: sub_002211A0
// Address: 0x2211a0 - 0x2213b0
void sub_002211A0_0x2211a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002211A0_0x2211a0");
#endif

    switch (ctx->pc) {
        case 0x221210u: goto label_221210;
        case 0x221220u: goto label_221220;
        case 0x221238u: goto label_221238;
        case 0x221250u: goto label_221250;
        case 0x221260u: goto label_221260;
        case 0x221280u: goto label_221280;
        case 0x221290u: goto label_221290;
        case 0x2212a8u: goto label_2212a8;
        case 0x2212c0u: goto label_2212c0;
        case 0x2212dcu: goto label_2212dc;
        case 0x2212ecu: goto label_2212ec;
        case 0x2212fcu: goto label_2212fc;
        case 0x221314u: goto label_221314;
        case 0x221324u: goto label_221324;
        case 0x221334u: goto label_221334;
        case 0x221344u: goto label_221344;
        case 0x221360u: goto label_221360;
        case 0x221380u: goto label_221380;
        default: break;
    }

    ctx->pc = 0x2211a0u;

    // 0x2211a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2211a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2211a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2211a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2211a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2211ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2211acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2211b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2211b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2211b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2211b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2211b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2211b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2211bc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2211bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2211c0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2211c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2211c4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2211c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2211c8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2211c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2211cc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x2211ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x2211d0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x2211d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x2211d4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2211d8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x2211d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2211dc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2211e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2211e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2211e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2211e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2211e8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2211E8u;
    {
        const bool branch_taken_0x2211e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2211e8) {
            ctx->pc = 0x221240u;
            goto label_221240;
        }
    }
    ctx->pc = 0x2211F0u;
    // 0x2211f0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x2211F0u;
    {
        const bool branch_taken_0x2211f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2211f0) {
            ctx->pc = 0x2212CCu;
            goto label_2212cc;
        }
    }
    ctx->pc = 0x2211F8u;
    // 0x2211f8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2211F8u;
    {
        const bool branch_taken_0x2211f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2211f8) {
            ctx->pc = 0x221240u;
            goto label_221240;
        }
    }
    ctx->pc = 0x221200u;
    // 0x221200: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x221200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x221204: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221208: 0xc08639c  jal         func_218E70
    ctx->pc = 0x221208u;
    SET_GPR_U32(ctx, 31, 0x221210u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x221208u, 0x221210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221210u;
label_221210:
    // 0x221210: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x221210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221218: 0xc08638c  jal         func_218E30
    ctx->pc = 0x221218u;
    SET_GPR_U32(ctx, 31, 0x221220u);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x221218u, 0x221220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221220u;
label_221220:
    // 0x221220: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221224: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x221224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x221228: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x221228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22122c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22122cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221230: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x221230u;
    SET_GPR_U32(ctx, 31, 0x221238u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x221230u, 0x221238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221238u;
label_221238:
    // 0x221238: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x221238u;
    {
        const bool branch_taken_0x221238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221238) {
            ctx->pc = 0x2212CCu;
            goto label_2212cc;
        }
    }
    ctx->pc = 0x221240u;
label_221240:
    // 0x221240: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221244: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x221244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221248: 0xc0884f4  jal         func_2213D0
    ctx->pc = 0x221248u;
    SET_GPR_U32(ctx, 31, 0x221250u);
    ctx->pc = 0x2213D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D0u, 0x221248u, 0x221250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221258: 0xc086384  jal         func_218E10
    ctx->pc = 0x221258u;
    SET_GPR_U32(ctx, 31, 0x221260u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x221258u, 0x221260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221260u;
label_221260:
    // 0x221260: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x221260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x221264: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x221268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22126c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22126Cu;
    {
        const bool branch_taken_0x22126c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22126c) {
            ctx->pc = 0x22129Cu;
            goto label_22129c;
        }
    }
    ctx->pc = 0x221274u;
    // 0x221274: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x221274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221278: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x221278u;
    SET_GPR_U32(ctx, 31, 0x221280u);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x221278u, 0x221280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221280u;
label_221280:
    // 0x221280: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x221280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x221284: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221288: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x221288u;
    SET_GPR_U32(ctx, 31, 0x221290u);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x221288u, 0x221290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221290u;
label_221290:
    // 0x221290: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x221290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x221294: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x221294u;
    {
        const bool branch_taken_0x221294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221294) {
            ctx->pc = 0x221318u;
            goto label_221318;
        }
    }
    ctx->pc = 0x22129Cu;
label_22129c:
    // 0x22129c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2212a0: 0xc086228  jal         func_2188A0
    ctx->pc = 0x2212A0u;
    SET_GPR_U32(ctx, 31, 0x2212A8u);
    ctx->pc = 0x2188A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188A0u, 0x2212A0u, 0x2212A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212A8u;
label_2212a8:
    // 0x2212a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2212a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2212ac: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2212ACu;
    {
        const bool branch_taken_0x2212ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2212ac) {
            ctx->pc = 0x221318u;
            goto label_221318;
        }
    }
    ctx->pc = 0x2212B4u;
    // 0x2212b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2212b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2212b8: 0xc086228  jal         func_2188A0
    ctx->pc = 0x2212B8u;
    SET_GPR_U32(ctx, 31, 0x2212C0u);
    ctx->pc = 0x2188A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188A0u, 0x2212B8u, 0x2212C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212C0u;
label_2212c0:
    // 0x2212c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2212c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2212c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2212C4u;
    {
        const bool branch_taken_0x2212c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212c4) {
            ctx->pc = 0x221318u;
            goto label_221318;
        }
    }
    ctx->pc = 0x2212CCu;
label_2212cc:
    // 0x2212cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2212ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2212d0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2212d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2212d4: 0xc0884f4  jal         func_2213D0
    ctx->pc = 0x2212D4u;
    SET_GPR_U32(ctx, 31, 0x2212DCu);
    ctx->pc = 0x2213D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D0u, 0x2212D4u, 0x2212DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212DCu;
label_2212dc:
    // 0x2212dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2212dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2212e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212e4: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x2212E4u;
    SET_GPR_U32(ctx, 31, 0x2212ECu);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x2212E4u, 0x2212ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212ECu;
label_2212ec:
    // 0x2212ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2212ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2212f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2212f4: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x2212F4u;
    SET_GPR_U32(ctx, 31, 0x2212FCu);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x2212F4u, 0x2212FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212FCu;
label_2212fc:
    // 0x2212fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221300: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221300u;
    {
        const bool branch_taken_0x221300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x221300) {
            ctx->pc = 0x221318u;
            goto label_221318;
        }
    }
    ctx->pc = 0x221308u;
    // 0x221308: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22130c: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x22130Cu;
    SET_GPR_U32(ctx, 31, 0x221314u);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x22130Cu, 0x221314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221314u;
label_221314:
    // 0x221314: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x221314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_221318:
    // 0x221318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22131c: 0xc0884ec  jal         func_2213B0
    ctx->pc = 0x22131Cu;
    SET_GPR_U32(ctx, 31, 0x221324u);
    ctx->pc = 0x2213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213B0u, 0x22131Cu, 0x221324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221324u;
label_221324:
    // 0x221324: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x221324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x221328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22132c: 0xc086384  jal         func_218E10
    ctx->pc = 0x22132Cu;
    SET_GPR_U32(ctx, 31, 0x221334u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x22132Cu, 0x221334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221334u;
label_221334:
    // 0x221334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x221334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x221338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22133c: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x22133Cu;
    SET_GPR_U32(ctx, 31, 0x221344u);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x22133Cu, 0x221344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221344u;
label_221344:
    // 0x221344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x221344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x221348: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22134c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221354: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x221354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x221358: 0xc042858  jal         func_10A160
    ctx->pc = 0x221358u;
    SET_GPR_U32(ctx, 31, 0x221360u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x221358u, 0x221360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221360u;
label_221360:
    // 0x221360: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221364: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22136c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22136cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x221370: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221378: 0xc0861d8  jal         func_218760
    ctx->pc = 0x221378u;
    SET_GPR_U32(ctx, 31, 0x221380u);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x221378u, 0x221380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221380u;
label_221380:
    // 0x221380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22138c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22138cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221398: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22139c: 0x3e00008  jr          $ra
    ctx->pc = 0x22139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22139Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2213A4u;
    // 0x2213a4: 0x0  nop
    ctx->pc = 0x2213a4u;
    // NOP
    // 0x2213a8: 0x0  nop
    ctx->pc = 0x2213a8u;
    // NOP
    // 0x2213ac: 0x0  nop
    ctx->pc = 0x2213acu;
    // NOP
    ctx->pc = 0x2213b0u;
}
