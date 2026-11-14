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

// Function: sub_00101770
// Address: 0x101770 - 0x101a80
void sub_00101770_0x101770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101770_0x101770");
#endif

    switch (ctx->pc) {
        case 0x1017b0u: goto label_1017b0;
        case 0x1017c4u: goto label_1017c4;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017dcu: goto label_1017dc;
        case 0x1017fcu: goto label_1017fc;
        case 0x101840u: goto label_101840;
        case 0x101850u: goto label_101850;
        case 0x101898u: goto label_101898;
        case 0x1018b0u: goto label_1018b0;
        case 0x1018fcu: goto label_1018fc;
        case 0x101970u: goto label_101970;
        case 0x101998u: goto label_101998;
        case 0x1019acu: goto label_1019ac;
        case 0x1019f4u: goto label_1019f4;
        case 0x101a44u: goto label_101a44;
        default: break;
    }

    ctx->pc = 0x101770u;

    // 0x101770: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x101770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x101774: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x101774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x101778: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x101778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x10177c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x101780: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x101780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x101784: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x101784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x101788: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x101788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10178c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x101790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10179c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x10179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1017a0: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1017a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x1017a4: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x1017a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x1017a8: 0xc05548c  jal         func_155230
    ctx->pc = 0x1017A8u;
    SET_GPR_U32(ctx, 31, 0x1017B0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1017A8u, 0x1017B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017B0u;
label_1017b0:
    // 0x1017b0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1017b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1017b4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1017b8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1017bc: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x1017BCu;
    SET_GPR_U32(ctx, 31, 0x1017C4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1017BCu, 0x1017C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017C4u;
label_1017c4:
    // 0x1017c4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1017c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1017c8: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x1017C8u;
    SET_GPR_U32(ctx, 31, 0x1017D0u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x1017C8u, 0x1017D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D0u;
label_1017d0:
    // 0x1017d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1017d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017d4: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x1017D4u;
    SET_GPR_U32(ctx, 31, 0x1017DCu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1017D4u, 0x1017DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017DCu;
label_1017dc:
    // 0x1017dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1017dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1017e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e4: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x1017e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x1017e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1017E8u;
    {
        const bool branch_taken_0x1017e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1017e8) {
            ctx->pc = 0x10180Cu;
            goto label_10180c;
        }
    }
    ctx->pc = 0x1017F0u;
    // 0x1017f0: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x1017f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x1017f4: 0xc04e308  jal         func_138C20
    ctx->pc = 0x1017F4u;
    SET_GPR_U32(ctx, 31, 0x1017FCu);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x1017F4u, 0x1017FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017FCu;
label_1017fc:
    // 0x1017fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1017FCu;
    {
        const bool branch_taken_0x1017fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1017fc) {
            ctx->pc = 0x10180Cu;
            goto label_10180c;
        }
    }
    ctx->pc = 0x101804u;
    // 0x101804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101808: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x101808u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10180c:
    // 0x10180c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x10180Cu;
    {
        const bool branch_taken_0x10180c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10180c) {
            ctx->pc = 0x101824u;
            goto label_101824;
        }
    }
    ctx->pc = 0x101814u;
    // 0x101814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101818: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x101818u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10181c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10181Cu;
    {
        const bool branch_taken_0x10181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10181c) {
            ctx->pc = 0x101828u;
            goto label_101828;
        }
    }
    ctx->pc = 0x101824u;
label_101824:
    // 0x101824: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x101824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101828:
    // 0x101828: 0x327100ff  andi        $s1, $s3, 0xFF
    ctx->pc = 0x101828u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x10182c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x10182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x101830: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x101830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x101834: 0x24a51280  addiu       $a1, $a1, 0x1280
    ctx->pc = 0x101834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4736));
    // 0x101838: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x101838u;
    SET_GPR_U32(ctx, 31, 0x101840u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x101838u, 0x101840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101840u;
label_101840:
    // 0x101840: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x101840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x101844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101848: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x101848u;
    SET_GPR_U32(ctx, 31, 0x101850u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x101848u, 0x101850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101850u;
label_101850:
    // 0x101850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101854: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x101854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101858: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x101858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x10185c: 0x16c20017  bne         $s6, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10185Cu;
    {
        const bool branch_taken_0x10185c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x10185c) {
            ctx->pc = 0x1018BCu;
            goto label_1018bc;
        }
    }
    ctx->pc = 0x101864u;
    // 0x101864: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x101864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x101868: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x101868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10186c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10186Cu;
    {
        const bool branch_taken_0x10186c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10186c) {
            ctx->pc = 0x1018BCu;
            goto label_1018bc;
        }
    }
    ctx->pc = 0x101874u;
    // 0x101874: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x101874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x101878: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10187c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10187Cu;
    {
        const bool branch_taken_0x10187c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10187c) {
            ctx->pc = 0x1018BCu;
            goto label_1018bc;
        }
    }
    ctx->pc = 0x101884u;
    // 0x101884: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x101884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x101888: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x101888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10188c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x10188cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x101890: 0xc04a424  jal         func_129090
    ctx->pc = 0x101890u;
    SET_GPR_U32(ctx, 31, 0x101898u);
    ctx->pc = 0x129090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129090u, 0x101890u, 0x101898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101898u;
label_101898:
    // 0x101898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10189c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x10189cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1018a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1018a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1018a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1018a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1018a8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1018A8u;
    SET_GPR_U32(ctx, 31, 0x1018B0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1018A8u, 0x1018B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018B0u;
label_1018b0:
    // 0x1018b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1018b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1018b4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1018B4u;
    {
        const bool branch_taken_0x1018b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1018b4) {
            ctx->pc = 0x101A48u;
            goto label_101a48;
        }
    }
    ctx->pc = 0x1018BCu;
label_1018bc:
    // 0x1018bc: 0x2ec10019  sltiu       $at, $s6, 0x19
    ctx->pc = 0x1018bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1018c0: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1018C0u;
    {
        const bool branch_taken_0x1018c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1018c0) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x1018C8u;
    // 0x1018c8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1018cc: 0x24637e00  addiu       $v1, $v1, 0x7E00
    ctx->pc = 0x1018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32256));
    // 0x1018d0: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1018d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1018d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1018d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1018d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1018d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1018dc: 0x400008  jr          $v0
    ctx->pc = 0x1018DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1018E4u: goto label_1018e4;
            case 0x101908u: goto label_101908;
            case 0x10191Cu: goto label_10191c;
            case 0x10192Cu: goto label_10192c;
            case 0x101944u: goto label_101944;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1018E4u;
label_1018e4:
    // 0x1018e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1018e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1018e8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1018e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1018ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1018f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1018f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1018f4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1018F4u;
    SET_GPR_U32(ctx, 31, 0x1018FCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1018F4u, 0x1018FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018FCu;
label_1018fc:
    // 0x1018fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1018fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x101900: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x101900u;
    {
        const bool branch_taken_0x101900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101900) {
            ctx->pc = 0x101A48u;
            goto label_101a48;
        }
    }
    ctx->pc = 0x101908u;
label_101908:
    // 0x101908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10190c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10190cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x101910: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x101910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101914: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x101914u;
    {
        const bool branch_taken_0x101914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101914) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x10191Cu;
label_10191c:
    // 0x10191c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101920: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x101924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101924u;
    {
        const bool branch_taken_0x101924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101924) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x10192Cu;
label_10192c:
    // 0x10192c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x10192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x101930: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x101930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x101934: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101938: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10193c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x101940: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x101940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101944:
    // 0x101944: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x101944u;
    {
        const bool branch_taken_0x101944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101944) {
            ctx->pc = 0x101950u;
            goto label_101950;
        }
    }
    ctx->pc = 0x10194Cu;
    // 0x10194c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101950:
    // 0x101950: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x101950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x101954: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101954u;
    {
        const bool branch_taken_0x101954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101954) {
            ctx->pc = 0x10197Cu;
            goto label_10197c;
        }
    }
    ctx->pc = 0x10195Cu;
    // 0x10195c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x10195cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101960: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x101960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x101964: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101968: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x101968u;
    SET_GPR_U32(ctx, 31, 0x101970u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x101968u, 0x101970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101970u;
label_101970:
    // 0x101970: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x101970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101974: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x101974u;
    {
        const bool branch_taken_0x101974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101974) {
            ctx->pc = 0x101A48u;
            goto label_101a48;
        }
    }
    ctx->pc = 0x10197Cu;
label_10197c:
    // 0x10197c: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x10197Cu;
    {
        const bool branch_taken_0x10197c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x10197c) {
            ctx->pc = 0x1019ACu;
            goto label_1019ac;
        }
    }
    ctx->pc = 0x101984u;
    // 0x101984: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x101984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x101988: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x101988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10198c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101990: 0xc04c5d4  jal         func_131750
    ctx->pc = 0x101990u;
    SET_GPR_U32(ctx, 31, 0x101998u);
    ctx->pc = 0x131750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131750u, 0x101990u, 0x101998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101998u;
label_101998:
    // 0x101998: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x10199c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1019a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1019a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019a4: 0xc04c5d4  jal         func_131750
    ctx->pc = 0x1019A4u;
    SET_GPR_U32(ctx, 31, 0x1019ACu);
    ctx->pc = 0x131750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131750u, 0x1019A4u, 0x1019ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019ACu;
label_1019ac:
    // 0x1019ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1019acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1019b0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1019b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1019b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1019b8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1019B8u;
    {
        const bool branch_taken_0x1019b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1019b8) {
            ctx->pc = 0x101A10u;
            goto label_101a10;
        }
    }
    ctx->pc = 0x1019C0u;
    // 0x1019c0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1019c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1019c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1019c8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1019C8u;
    {
        const bool branch_taken_0x1019c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1019c8) {
            ctx->pc = 0x1019FCu;
            goto label_1019fc;
        }
    }
    ctx->pc = 0x1019D0u;
    // 0x1019d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1019d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1019d4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1019d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1019d8: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1019d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x1019dc: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x1019dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1019e0: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x1019e4: 0x24e71be0  addiu       $a3, $a3, 0x1BE0
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7136));
    // 0x1019e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019ec: 0xc08d218  jal         func_234860
    ctx->pc = 0x1019ECu;
    SET_GPR_U32(ctx, 31, 0x1019F4u);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x1019ECu, 0x1019F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019F4u;
label_1019f4:
    // 0x1019f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1019F4u;
    {
        const bool branch_taken_0x1019f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1019f4) {
            ctx->pc = 0x101A10u;
            goto label_101a10;
        }
    }
    ctx->pc = 0x1019FCu;
label_1019fc:
    // 0x1019fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x101a00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101a04: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101A04u;
    {
        const bool branch_taken_0x101a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x101a04) {
            ctx->pc = 0x101A10u;
            goto label_101a10;
        }
    }
    ctx->pc = 0x101A0Cu;
    // 0x101a0c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x101a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_101a10:
    // 0x101a10: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x101a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x101a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101a18: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101A18u;
    {
        const bool branch_taken_0x101a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x101a18) {
            ctx->pc = 0x101A2Cu;
            goto label_101a2c;
        }
    }
    ctx->pc = 0x101A20u;
    // 0x101a20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x101a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101A24u;
    {
        const bool branch_taken_0x101a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101a24) {
            ctx->pc = 0x101A30u;
            goto label_101a30;
        }
    }
    ctx->pc = 0x101A2Cu;
label_101a2c:
    // 0x101a2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x101a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101a30:
    // 0x101a30: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x101a30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x101a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x101a38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101a3c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x101A3Cu;
    SET_GPR_U32(ctx, 31, 0x101A44u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x101A3Cu, 0x101A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A44u;
label_101a44:
    // 0x101a44: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x101a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_101a48:
    // 0x101a48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x101a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101a4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x101a4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101a50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x101a50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101a54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x101a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101a58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101a5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101a60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a70: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x101a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x101a74: 0x3e00008  jr          $ra
    ctx->pc = 0x101A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101A7Cu;
    // 0x101a7c: 0x0  nop
    ctx->pc = 0x101a7cu;
    // NOP
    ctx->pc = 0x101a80u;
}
