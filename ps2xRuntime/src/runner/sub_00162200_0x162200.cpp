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

// Function: sub_00162200
// Address: 0x162200 - 0x162400
void sub_00162200_0x162200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162200_0x162200");
#endif

    switch (ctx->pc) {
        case 0x16223cu: goto label_16223c;
        case 0x16224cu: goto label_16224c;
        case 0x16225cu: goto label_16225c;
        case 0x162268u: goto label_162268;
        case 0x162274u: goto label_162274;
        case 0x162294u: goto label_162294;
        case 0x1622b0u: goto label_1622b0;
        case 0x162300u: goto label_162300;
        case 0x162320u: goto label_162320;
        case 0x162340u: goto label_162340;
        case 0x162360u: goto label_162360;
        case 0x162380u: goto label_162380;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623c0u: goto label_1623c0;
        default: break;
    }

    ctx->pc = 0x162200u;

    // 0x162200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x162204: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x162204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x162208: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x162208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16220c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x162210: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x162210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x162214: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x162214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x162218: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x162218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16221c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x162220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16222c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x16222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x162230: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x162230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x162234: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x162234u;
    SET_GPR_U32(ctx, 31, 0x16223Cu);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x162234u, 0x16223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16223Cu;
label_16223c:
    // 0x16223c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162244: 0xc058900  jal         func_162400
    ctx->pc = 0x162244u;
    SET_GPR_U32(ctx, 31, 0x16224Cu);
    ctx->pc = 0x162400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162400u, 0x162244u, 0x16224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16224Cu;
label_16224c:
    // 0x16224c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162250: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162254: 0xc041a60  jal         func_106980
    ctx->pc = 0x162254u;
    SET_GPR_U32(ctx, 31, 0x16225Cu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x162254u, 0x16225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16225Cu;
label_16225c:
    // 0x16225c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16225cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162260: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x162260u;
    {
        const bool branch_taken_0x162260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162260) {
            ctx->pc = 0x1622A4u;
            goto label_1622a4;
        }
    }
    ctx->pc = 0x162268u;
label_162268:
    // 0x162268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16226c: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x16226Cu;
    SET_GPR_U32(ctx, 31, 0x162274u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x16226Cu, 0x162274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162274u;
label_162274:
    // 0x162274: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x162278: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162278u;
    {
        const bool branch_taken_0x162278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x162278) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162280u;
    // 0x162280: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162284: 0x240504f9  addiu       $a1, $zero, 0x4F9
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1273));
    // 0x162288: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16228c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x16228Cu;
    SET_GPR_U32(ctx, 31, 0x162294u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x16228Cu, 0x162294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162294u;
label_162294:
    // 0x162294: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162298: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x162298u;
    {
        const bool branch_taken_0x162298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162298) {
            ctx->pc = 0x1622B8u;
            goto label_1622b8;
        }
    }
    ctx->pc = 0x1622A0u;
label_1622a0:
    // 0x1622a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1622a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1622a4:
    // 0x1622a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1622a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1622a8: 0xc041a14  jal         func_106850
    ctx->pc = 0x1622A8u;
    SET_GPR_U32(ctx, 31, 0x1622B0u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x1622A8u, 0x1622B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1622B0u;
label_1622b0:
    // 0x1622b0: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1622B0u;
    {
        const bool branch_taken_0x1622b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1622b0) {
            ctx->pc = 0x162268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162268;
        }
    }
    ctx->pc = 0x1622B8u;
label_1622b8:
    // 0x1622b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1622b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1622bc: 0x1222003b  beq         $s1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1622BCu;
    {
        const bool branch_taken_0x1622bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1622bc) {
            ctx->pc = 0x1623ACu;
            goto label_1623ac;
        }
    }
    ctx->pc = 0x1622C4u;
    // 0x1622c4: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x1622c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1622c8: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1622C8u;
    {
        const bool branch_taken_0x1622c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1622c8) {
            ctx->pc = 0x16238Cu;
            goto label_16238c;
        }
    }
    ctx->pc = 0x1622D0u;
    // 0x1622d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1622d4: 0x246383d0  addiu       $v1, $v1, -0x7C30
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935504));
    // 0x1622d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1622d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1622dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1622dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1622e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1622e4: 0x400008  jr          $v0
    ctx->pc = 0x1622E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1622ECu: goto label_1622ec;
            case 0x16230Cu: goto label_16230c;
            case 0x16232Cu: goto label_16232c;
            case 0x16234Cu: goto label_16234c;
            case 0x16236Cu: goto label_16236c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1622E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1622ECu;
label_1622ec:
    // 0x1622ec: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1622ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1622f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1622f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1622f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1622f8: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x1622F8u;
    SET_GPR_U32(ctx, 31, 0x162300u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x1622F8u, 0x162300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162300u;
label_162300:
    // 0x162300: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x162300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162304: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x162304u;
    {
        const bool branch_taken_0x162304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162304) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x16230Cu;
label_16230c:
    // 0x16230c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x16230cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162310: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162314: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162318: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x162318u;
    SET_GPR_U32(ctx, 31, 0x162320u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x162318u, 0x162320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162320u;
label_162320:
    // 0x162320: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x162320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162324: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x162324u;
    {
        const bool branch_taken_0x162324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162324) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x16232Cu;
label_16232c:
    // 0x16232c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x16232cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162330: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x162334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162338: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x162338u;
    SET_GPR_U32(ctx, 31, 0x162340u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x162338u, 0x162340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162340u;
label_162340:
    // 0x162340: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x162340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162344: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162344u;
    {
        const bool branch_taken_0x162344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162344) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x16234Cu;
label_16234c:
    // 0x16234c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162350: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162354: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162358: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x162358u;
    SET_GPR_U32(ctx, 31, 0x162360u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x162358u, 0x162360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162360u;
label_162360:
    // 0x162360: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x162360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162364: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x162364u;
    {
        const bool branch_taken_0x162364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162364) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x16236Cu;
label_16236c:
    // 0x16236c: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162370: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162378: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x162378u;
    SET_GPR_U32(ctx, 31, 0x162380u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x162378u, 0x162380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162380u;
label_162380:
    // 0x162380: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162384: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x162384u;
    {
        const bool branch_taken_0x162384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162384) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x16238Cu;
label_16238c:
    // 0x16238c: 0x2413029a  addiu       $s3, $zero, 0x29A
    ctx->pc = 0x16238cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x162390: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x162394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162398: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x162398u;
    SET_GPR_U32(ctx, 31, 0x1623A0u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x162398u, 0x1623A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623A0u;
label_1623a0:
    // 0x1623a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1623a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1623A4u;
    {
        const bool branch_taken_0x1623a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623a4) {
            ctx->pc = 0x1623C4u;
            goto label_1623c4;
        }
    }
    ctx->pc = 0x1623ACu;
label_1623ac:
    // 0x1623ac: 0x2412029a  addiu       $s2, $zero, 0x29A
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x1623b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1623b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1623b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1623b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1623b8: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x1623B8u;
    SET_GPR_U32(ctx, 31, 0x1623C0u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x1623B8u, 0x1623C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623C0u;
label_1623c0:
    // 0x1623c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1623c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1623c4:
    // 0x1623c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1623c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1623c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1623c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1623cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1623ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1623d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1623d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1623d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1623d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1623d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1623d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1623dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1623dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1623e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1623e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1623e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1623e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1623e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1623e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1623ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1623f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1623F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1623F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1623F8u;
    // 0x1623f8: 0x0  nop
    ctx->pc = 0x1623f8u;
    // NOP
    // 0x1623fc: 0x0  nop
    ctx->pc = 0x1623fcu;
    // NOP
    ctx->pc = 0x162400u;
}
