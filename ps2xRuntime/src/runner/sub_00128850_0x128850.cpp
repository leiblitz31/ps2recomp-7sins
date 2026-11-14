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

// Function: sub_00128850
// Address: 0x128850 - 0x128b00
void sub_00128850_0x128850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128850_0x128850");
#endif

    switch (ctx->pc) {
        case 0x128898u: goto label_128898;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288c0u: goto label_1288c0;
        case 0x1288dcu: goto label_1288dc;
        case 0x1288f8u: goto label_1288f8;
        case 0x128914u: goto label_128914;
        case 0x128920u: goto label_128920;
        case 0x12894cu: goto label_12894c;
        case 0x12895cu: goto label_12895c;
        case 0x128994u: goto label_128994;
        case 0x1289a4u: goto label_1289a4;
        case 0x1289dcu: goto label_1289dc;
        case 0x1289ecu: goto label_1289ec;
        case 0x128a60u: goto label_128a60;
        case 0x128a70u: goto label_128a70;
        case 0x128a80u: goto label_128a80;
        case 0x128aa0u: goto label_128aa0;
        case 0x128ab0u: goto label_128ab0;
        case 0x128ac0u: goto label_128ac0;
        default: break;
    }

    ctx->pc = 0x128850u;

    // 0x128850: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x128850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x128854: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x128854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x128858: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x128858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12885c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128860: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128864: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12886c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12887c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x12887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x128880: 0xa3a000cf  sb          $zero, 0xCF($sp)
    ctx->pc = 0x128880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 0));
    // 0x128884: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x128884u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128888: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12888c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128890: 0xc041b48  jal         func_106D20
    ctx->pc = 0x128890u;
    SET_GPR_U32(ctx, 31, 0x128898u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x128890u, 0x128898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128898u;
label_128898:
    // 0x128898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12889c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x12889Cu;
    SET_GPR_U32(ctx, 31, 0x1288A4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x12889Cu, 0x1288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288A4u;
label_1288a4:
    // 0x1288a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1288a8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1288b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1288b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288b8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1288B8u;
    {
        const bool branch_taken_0x1288b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1288b8) {
            ctx->pc = 0x128A28u;
            goto label_128a28;
        }
    }
    ctx->pc = 0x1288C0u;
label_1288c0:
    // 0x1288c0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1288c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1288c8: 0x24a52498  addiu       $a1, $a1, 0x2498
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x1288cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1288ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288d0: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x1288d4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1288D4u;
    SET_GPR_U32(ctx, 31, 0x1288DCu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1288D4u, 0x1288DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288DCu;
label_1288dc:
    // 0x1288dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1288dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1288e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1288e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1288e4: 0x24a524a8  addiu       $a1, $a1, 0x24A8
    ctx->pc = 0x1288e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9384));
    // 0x1288e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1288e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288ec: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x1288f0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1288F0u;
    SET_GPR_U32(ctx, 31, 0x1288F8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1288F0u, 0x1288F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288F8u;
label_1288f8:
    // 0x1288f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1288fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128900: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
    // 0x128904: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x128904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128908: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x12890c: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x12890Cu;
    SET_GPR_U32(ctx, 31, 0x128914u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x12890Cu, 0x128914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128914u;
label_128914:
    // 0x128914: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128918: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x128918u;
    {
        const bool branch_taken_0x128918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128918) {
            ctx->pc = 0x128A14u;
            goto label_128a14;
        }
    }
    ctx->pc = 0x128920u;
label_128920:
    // 0x128920: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x128924: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x128924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x128928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12892c: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x12892cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128930: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x128930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x128934: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x128938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12893c: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128940: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128944: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128944u;
    SET_GPR_U32(ctx, 31, 0x12894Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128944u, 0x12894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12894Cu;
label_12894c:
    // 0x12894c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128954: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128954u;
    SET_GPR_U32(ctx, 31, 0x12895Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128954u, 0x12895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12895Cu;
label_12895c:
    // 0x12895c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12895Cu;
    {
        const bool branch_taken_0x12895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12895c) {
            ctx->pc = 0x128988u;
            goto label_128988;
        }
    }
    ctx->pc = 0x128964u;
    // 0x128964: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x128964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x128968: 0x8c422210  lw          $v0, 0x2210($v0)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2210u));
    // 0x12896c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128988u;
            goto label_128988;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128978: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12897c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12897cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x128980: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x128980u;
    {
        const bool branch_taken_0x128980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128980) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x128988u;
label_128988:
    // 0x128988: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12898c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x12898Cu;
    SET_GPR_U32(ctx, 31, 0x128994u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x12898Cu, 0x128994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128994u;
label_128994:
    // 0x128994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12899c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x12899Cu;
    SET_GPR_U32(ctx, 31, 0x1289A4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x12899Cu, 0x1289A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289A4u;
label_1289a4:
    // 0x1289a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1289A4u;
    {
        const bool branch_taken_0x1289a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289a4) {
            ctx->pc = 0x1289D0u;
            goto label_1289d0;
        }
    }
    ctx->pc = 0x1289ACu;
    // 0x1289ac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1289acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1289b0: 0x8c422214  lw          $v0, 0x2214($v0)
    ctx->pc = 0x1289b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2214u));
    // 0x1289b4: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1289B4u;
    {
        const bool branch_taken_0x1289b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1289b4) {
            ctx->pc = 0x1289D0u;
            goto label_1289d0;
        }
    }
    ctx->pc = 0x1289BCu;
    // 0x1289bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289c0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1289c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1289c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1289c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1289C8u;
    {
        const bool branch_taken_0x1289c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289c8) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x1289D0u;
label_1289d0:
    // 0x1289d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1289d4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1289D4u;
    SET_GPR_U32(ctx, 31, 0x1289DCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1289D4u, 0x1289DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289DCu;
label_1289dc:
    // 0x1289dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e4: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1289E4u;
    SET_GPR_U32(ctx, 31, 0x1289ECu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1289E4u, 0x1289ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289ECu;
label_1289ec:
    // 0x1289ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1289ECu;
    {
        const bool branch_taken_0x1289ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289ec) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x1289F4u;
    // 0x1289f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1289f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1289f8: 0x8c422224  lw          $v0, 0x2224($v0)
    ctx->pc = 0x1289f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E2224u));
    // 0x1289fc: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x128A04u;
    // 0x128a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a08: 0xa3a200cf  sb          $v0, 0xCF($sp)
    ctx->pc = 0x128a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 2));
    // 0x128a0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x128a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_128a10:
    // 0x128a10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_128a14:
    // 0x128a14: 0x8f82ba14  lw          $v0, -0x45EC($gp)
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
    // 0x128a18: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x128a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128a1c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x128A1Cu;
    {
        const bool branch_taken_0x128a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a1c) {
            ctx->pc = 0x128920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128920;
        }
    }
    ctx->pc = 0x128A24u;
    // 0x128a24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x128a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_128a28:
    // 0x128a28: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x128a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x128a2c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x128A2Cu;
    {
        const bool branch_taken_0x128a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a2c) {
            ctx->pc = 0x1288C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1288c0;
        }
    }
    ctx->pc = 0x128A34u;
    // 0x128a34: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x128A34u;
    {
        const bool branch_taken_0x128a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a34) {
            ctx->pc = 0x128A8Cu;
            goto label_128a8c;
        }
    }
    ctx->pc = 0x128A3Cu;
    // 0x128a3c: 0x2e010003  sltiu       $at, $s0, 0x3
    ctx->pc = 0x128a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x128a40: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x128A40u;
    {
        const bool branch_taken_0x128a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a40) {
            ctx->pc = 0x128A8Cu;
            goto label_128a8c;
        }
    }
    ctx->pc = 0x128A48u;
    // 0x128a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a4c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x128a4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x128a50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128a54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128a58: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128A58u;
    SET_GPR_U32(ctx, 31, 0x128A60u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128A58u, 0x128A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A60u;
label_128a60:
    // 0x128a60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128a64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128a68: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128A68u;
    SET_GPR_U32(ctx, 31, 0x128A70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128A68u, 0x128A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A70u;
label_128a70:
    // 0x128a70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128a74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128a78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128A78u;
    SET_GPR_U32(ctx, 31, 0x128A80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128A78u, 0x128A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A80u;
label_128a80:
    // 0x128a80: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x128a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128A84u;
    {
        const bool branch_taken_0x128a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a84) {
            ctx->pc = 0x128AC4u;
            goto label_128ac4;
        }
    }
    ctx->pc = 0x128A8Cu;
label_128a8c:
    // 0x128a8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x128a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128a94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128a98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128A98u;
    SET_GPR_U32(ctx, 31, 0x128AA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128A98u, 0x128AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AA0u;
label_128aa0:
    // 0x128aa0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128aa8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128AA8u;
    SET_GPR_U32(ctx, 31, 0x128AB0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128AA8u, 0x128AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AB0u;
label_128ab0:
    // 0x128ab0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128ab4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ab8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128AB8u;
    SET_GPR_U32(ctx, 31, 0x128AC0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128AB8u, 0x128AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AC0u;
label_128ac0:
    // 0x128ac0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x128ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_128ac4:
    // 0x128ac4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x128ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128ac8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x128ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128acc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x128accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128ad0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128ad4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128ad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128aec: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x128aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x128af0: 0x3e00008  jr          $ra
    ctx->pc = 0x128AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128AF8u;
    // 0x128af8: 0x0  nop
    ctx->pc = 0x128af8u;
    // NOP
    // 0x128afc: 0x0  nop
    ctx->pc = 0x128afcu;
    // NOP
    ctx->pc = 0x128b00u;
}
