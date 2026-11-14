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

// Function: sub_0013A430
// Address: 0x13a430 - 0x13a600
void sub_0013A430_0x13a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A430_0x13a430");
#endif

    switch (ctx->pc) {
        case 0x13a490u: goto label_13a490;
        case 0x13a49cu: goto label_13a49c;
        case 0x13a4bcu: goto label_13a4bc;
        case 0x13a4ccu: goto label_13a4cc;
        case 0x13a4e0u: goto label_13a4e0;
        case 0x13a504u: goto label_13a504;
        case 0x13a518u: goto label_13a518;
        case 0x13a528u: goto label_13a528;
        case 0x13a538u: goto label_13a538;
        case 0x13a54cu: goto label_13a54c;
        case 0x13a570u: goto label_13a570;
        case 0x13a580u: goto label_13a580;
        case 0x13a594u: goto label_13a594;
        case 0x13a5a4u: goto label_13a5a4;
        case 0x13a5c0u: goto label_13a5c0;
        case 0x13a5ccu: goto label_13a5cc;
        default: break;
    }

    ctx->pc = 0x13a430u;

    // 0x13a430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13a434: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13a438: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a43c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a440: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a450: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x13a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x13a454: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a458: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A458u;
    {
        const bool branch_taken_0x13a458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a458) {
            ctx->pc = 0x13A46Cu;
            goto label_13a46c;
        }
    }
    ctx->pc = 0x13A460u;
    // 0x13a460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a464: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x13A464u;
    {
        const bool branch_taken_0x13a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a464) {
            ctx->pc = 0x13A5D0u;
            goto label_13a5d0;
        }
    }
    ctx->pc = 0x13A46Cu;
label_13a46c:
    // 0x13a46c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a470: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A474u;
    {
        const bool branch_taken_0x13a474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a474) {
            ctx->pc = 0x13A488u;
            goto label_13a488;
        }
    }
    ctx->pc = 0x13A47Cu;
    // 0x13a47c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a480: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x13A480u;
    {
        const bool branch_taken_0x13a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a480) {
            ctx->pc = 0x13A5D0u;
            goto label_13a5d0;
        }
    }
    ctx->pc = 0x13A488u;
label_13a488:
    // 0x13a488: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x13A488u;
    SET_GPR_U32(ctx, 31, 0x13A490u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x13A488u, 0x13A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A490u;
label_13a490:
    // 0x13a490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a494: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x13A494u;
    SET_GPR_U32(ctx, 31, 0x13A49Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x13A494u, 0x13A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A49Cu;
label_13a49c:
    // 0x13a49c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13a49cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a4a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a4a8: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a4ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13a4b0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x13a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x13a4b4: 0xc040304  jal         func_100C10
    ctx->pc = 0x13A4B4u;
    SET_GPR_U32(ctx, 31, 0x13A4BCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13A4B4u, 0x13A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4BCu;
label_13a4bc:
    // 0x13a4bc: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13a4c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13a4c4: 0xc04ec90  jal         func_13B240
    ctx->pc = 0x13A4C4u;
    SET_GPR_U32(ctx, 31, 0x13A4CCu);
    ctx->pc = 0x13B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B240u, 0x13A4C4u, 0x13A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4CCu;
label_13a4cc:
    // 0x13a4cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13a4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13a4d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a4d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13A4D8u;
    SET_GPR_U32(ctx, 31, 0x13A4E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13A4D8u, 0x13A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4E0u;
label_13a4e0:
    // 0x13a4e0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A4E0u;
    {
        const bool branch_taken_0x13a4e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a4e0) {
            ctx->pc = 0x13A4F4u;
            goto label_13a4f4;
        }
    }
    ctx->pc = 0x13A4E8u;
    // 0x13a4e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13A4ECu;
    {
        const bool branch_taken_0x13a4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a4ec) {
            ctx->pc = 0x13A5D0u;
            goto label_13a5d0;
        }
    }
    ctx->pc = 0x13A4F4u;
label_13a4f4:
    // 0x13a4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13a4fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13A4FCu;
    SET_GPR_U32(ctx, 31, 0x13A504u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13A4FCu, 0x13A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A504u;
label_13a504:
    // 0x13a504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a508: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13a508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13a50c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a510: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x13A510u;
    SET_GPR_U32(ctx, 31, 0x13A518u);
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x13A510u, 0x13A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A518u;
label_13a518:
    // 0x13a518: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13a51c: 0x26850024  addiu       $a1, $s4, 0x24
    ctx->pc = 0x13a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x13a520: 0xc040304  jal         func_100C10
    ctx->pc = 0x13A520u;
    SET_GPR_U32(ctx, 31, 0x13A528u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13A520u, 0x13A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A528u;
label_13a528:
    // 0x13a528: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13a52c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13a530: 0xc04ee44  jal         func_13B910
    ctx->pc = 0x13A530u;
    SET_GPR_U32(ctx, 31, 0x13A538u);
    ctx->pc = 0x13B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B910u, 0x13A530u, 0x13A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A538u;
label_13a538:
    // 0x13a538: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13a538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a53c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13a540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a544: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13A544u;
    SET_GPR_U32(ctx, 31, 0x13A54Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13A544u, 0x13A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A54Cu;
label_13a54c:
    // 0x13a54c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A54Cu;
    {
        const bool branch_taken_0x13a54c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a54c) {
            ctx->pc = 0x13A560u;
            goto label_13a560;
        }
    }
    ctx->pc = 0x13A554u;
    // 0x13a554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a558: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13A558u;
    {
        const bool branch_taken_0x13a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a558) {
            ctx->pc = 0x13A5D0u;
            goto label_13a5d0;
        }
    }
    ctx->pc = 0x13A560u;
label_13a560:
    // 0x13a560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a564: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13a568: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13A568u;
    SET_GPR_U32(ctx, 31, 0x13A570u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13A568u, 0x13A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A570u;
label_13a570:
    // 0x13a570: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a578: 0xc091008  jal         func_244020
    ctx->pc = 0x13A578u;
    SET_GPR_U32(ctx, 31, 0x13A580u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x13A578u, 0x13A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A580u;
label_13a580:
    // 0x13a580: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x13a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x13a584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a588: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13a58c: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x13A58Cu;
    SET_GPR_U32(ctx, 31, 0x13A594u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x13A58Cu, 0x13A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A594u;
label_13a594:
    // 0x13a594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a598: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13a59c: 0xc090f14  jal         func_243C50
    ctx->pc = 0x13A59Cu;
    SET_GPR_U32(ctx, 31, 0x13A5A4u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x13A59Cu, 0x13A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5A4u;
label_13a5a4:
    // 0x13a5a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x13a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x13a5a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13a5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13a5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5b0: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x13a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a5b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a5b8: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x13A5B8u;
    SET_GPR_U32(ctx, 31, 0x13A5C0u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x13A5B8u, 0x13A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5C0u;
label_13a5c0:
    // 0x13a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5c4: 0xc091084  jal         func_244210
    ctx->pc = 0x13A5C4u;
    SET_GPR_U32(ctx, 31, 0x13A5CCu);
    ctx->pc = 0x244210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244210u, 0x13A5C4u, 0x13A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5CCu;
label_13a5cc:
    // 0x13a5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a5d0:
    // 0x13a5d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13a5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a5d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a5d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a5d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a5d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a5dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a5e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a5e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a5ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13a5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A5F8u;
    // 0x13a5f8: 0x0  nop
    ctx->pc = 0x13a5f8u;
    // NOP
    // 0x13a5fc: 0x0  nop
    ctx->pc = 0x13a5fcu;
    // NOP
    ctx->pc = 0x13a600u;
}
