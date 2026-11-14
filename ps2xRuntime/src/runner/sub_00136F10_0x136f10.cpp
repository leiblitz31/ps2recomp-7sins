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

// Function: sub_00136F10
// Address: 0x136f10 - 0x137440
void sub_00136F10_0x136f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136F10_0x136f10");
#endif

    switch (ctx->pc) {
        case 0x136f74u: goto label_136f74;
        case 0x136f84u: goto label_136f84;
        case 0x136fa8u: goto label_136fa8;
        case 0x136fb8u: goto label_136fb8;
        case 0x136fc8u: goto label_136fc8;
        case 0x136fe0u: goto label_136fe0;
        case 0x136ff0u: goto label_136ff0;
        case 0x137008u: goto label_137008;
        case 0x13701cu: goto label_13701c;
        case 0x137030u: goto label_137030;
        case 0x1370bcu: goto label_1370bc;
        case 0x1370d8u: goto label_1370d8;
        case 0x13710cu: goto label_13710c;
        case 0x137124u: goto label_137124;
        case 0x137144u: goto label_137144;
        case 0x1371a4u: goto label_1371a4;
        case 0x1371b8u: goto label_1371b8;
        case 0x1371d4u: goto label_1371d4;
        case 0x1371ecu: goto label_1371ec;
        case 0x1371f8u: goto label_1371f8;
        case 0x137214u: goto label_137214;
        case 0x13722cu: goto label_13722c;
        case 0x137244u: goto label_137244;
        case 0x137254u: goto label_137254;
        case 0x137260u: goto label_137260;
        case 0x137298u: goto label_137298;
        case 0x1372b0u: goto label_1372b0;
        case 0x1372dcu: goto label_1372dc;
        case 0x137334u: goto label_137334;
        case 0x137340u: goto label_137340;
        case 0x13737cu: goto label_13737c;
        case 0x137390u: goto label_137390;
        case 0x1373a4u: goto label_1373a4;
        case 0x1373b8u: goto label_1373b8;
        case 0x1373ccu: goto label_1373cc;
        case 0x1373e0u: goto label_1373e0;
        case 0x1373f4u: goto label_1373f4;
        case 0x137408u: goto label_137408;
        default: break;
    }

    ctx->pc = 0x136f10u;

    // 0x136f10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x136f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x136f14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x136f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x136f18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x136f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x136f1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x136f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x136f20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x136f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x136f24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x136f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x136f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x136f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x136f2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136f3c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x136f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x136f40: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x136f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x136f44: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x136f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136f48: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x136f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x136f4c: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x136f50: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x136f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136f54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136F54u;
    {
        const bool branch_taken_0x136f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136f54) {
            ctx->pc = 0x136F6Cu;
            goto label_136f6c;
        }
    }
    ctx->pc = 0x136F5Cu;
    // 0x136f5c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x136f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x136f60: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x136f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x136f64: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x136F64u;
    {
        const bool branch_taken_0x136f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f64) {
            ctx->pc = 0x1372E4u;
            goto label_1372e4;
        }
    }
    ctx->pc = 0x136F6Cu;
label_136f6c:
    // 0x136f6c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x136F6Cu;
    SET_GPR_U32(ctx, 31, 0x136F74u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x136F6Cu, 0x136F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F74u;
label_136f74:
    // 0x136f74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x136f74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x136f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f7c: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x136F7Cu;
    SET_GPR_U32(ctx, 31, 0x136F84u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x136F7Cu, 0x136F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F84u;
label_136f84:
    // 0x136f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136f88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136F88u;
    {
        const bool branch_taken_0x136f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x136f88) {
            ctx->pc = 0x136FA0u;
            goto label_136fa0;
        }
    }
    ctx->pc = 0x136F90u;
    // 0x136f90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136F90u;
    {
        const bool branch_taken_0x136f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f90) {
            ctx->pc = 0x136FA0u;
            goto label_136fa0;
        }
    }
    ctx->pc = 0x136F98u;
    // 0x136f98: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x136F98u;
    {
        const bool branch_taken_0x136f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f98) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x136FA0u;
label_136fa0:
    // 0x136fa0: 0xc05548c  jal         func_155230
    ctx->pc = 0x136FA0u;
    SET_GPR_U32(ctx, 31, 0x136FA8u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x136FA0u, 0x136FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FA8u;
label_136fa8:
    // 0x136fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x136facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x136fb0: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x136FB0u;
    SET_GPR_U32(ctx, 31, 0x136FB8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x136FB0u, 0x136FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FB8u;
label_136fb8:
    // 0x136fb8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x136fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x136fbc: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x136fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x136fc0: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x136FC0u;
    SET_GPR_U32(ctx, 31, 0x136FC8u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x136FC0u, 0x136FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FC8u;
label_136fc8:
    // 0x136fc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136fd0: 0x1083010d  beq         $a0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x136FD8u;
    // 0x136fd8: 0xc05548c  jal         func_155230
    ctx->pc = 0x136FD8u;
    SET_GPR_U32(ctx, 31, 0x136FE0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x136FD8u, 0x136FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FE0u;
label_136fe0:
    // 0x136fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fe4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x136fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x136fe8: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x136FE8u;
    SET_GPR_U32(ctx, 31, 0x136FF0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x136FE8u, 0x136FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FF0u;
label_136ff0:
    // 0x136ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ff4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x136FF4u;
    {
        const bool branch_taken_0x136ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ff4) {
            ctx->pc = 0x137024u;
            goto label_137024;
        }
    }
    ctx->pc = 0x136FFCu;
    // 0x136ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137000: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x137000u;
    SET_GPR_U32(ctx, 31, 0x137008u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x137000u, 0x137008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137008u;
label_137008:
    // 0x137008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137008u;
    {
        const bool branch_taken_0x137008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137008) {
            ctx->pc = 0x137024u;
            goto label_137024;
        }
    }
    ctx->pc = 0x137010u;
    // 0x137010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137014: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x137014u;
    SET_GPR_U32(ctx, 31, 0x13701Cu);
    ctx->pc = 0x18A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2E0u, 0x137014u, 0x13701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13701Cu;
label_13701c:
    // 0x13701c: 0x144000fa  bnez        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x13701Cu;
    {
        const bool branch_taken_0x13701c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13701c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137024u;
label_137024:
    // 0x137024: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x137024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137028: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x137028u;
    SET_GPR_U32(ctx, 31, 0x137030u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x137028u, 0x137030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137030u;
label_137030:
    // 0x137030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137034: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137034u;
    {
        const bool branch_taken_0x137034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x137034) {
            ctx->pc = 0x13705Cu;
            goto label_13705c;
        }
    }
    ctx->pc = 0x13703Cu;
    // 0x13703c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x13703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x137040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137044: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137044u;
    {
        const bool branch_taken_0x137044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x137044) {
            ctx->pc = 0x13705Cu;
            goto label_13705c;
        }
    }
    ctx->pc = 0x13704Cu;
    // 0x13704c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x13704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x137050: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x137050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x137054: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x137054u;
    {
        const bool branch_taken_0x137054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137054) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x13705Cu;
label_13705c:
    // 0x13705c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x13705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137060: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x137064: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x137064u;
    {
        const bool branch_taken_0x137064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137064) {
            ctx->pc = 0x137234u;
            goto label_137234;
        }
    }
    ctx->pc = 0x13706Cu;
    // 0x13706c: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x13706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137070: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x137070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x137074: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x137078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13707c: 0x108300e2  beq         $a0, $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x13707Cu;
    {
        const bool branch_taken_0x13707c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13707c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137084u;
    // 0x137084: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x137084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x137088: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13708c: 0x10020042  beq         $zero, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x13708Cu;
    {
        const bool branch_taken_0x13708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13708c) {
            ctx->pc = 0x137198u;
            goto label_137198;
        }
    }
    ctx->pc = 0x137094u;
    // 0x137094: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x137094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137098: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x137098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x13709c: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x13709cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1370a0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1370A0u;
    {
        const bool branch_taken_0x1370a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370a0) {
            ctx->pc = 0x137198u;
            goto label_137198;
        }
    }
    ctx->pc = 0x1370A8u;
    // 0x1370a8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1370ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1370acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1370b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1370b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1370b4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1370B4u;
    SET_GPR_U32(ctx, 31, 0x1370BCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1370B4u, 0x1370BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370BCu;
label_1370bc:
    // 0x1370bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1370bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370c0: 0x12c00035  beqz        $s6, . + 4 + (0x35 << 2)
    ctx->pc = 0x1370C0u;
    {
        const bool branch_taken_0x1370c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370c0) {
            ctx->pc = 0x137198u;
            goto label_137198;
        }
    }
    ctx->pc = 0x1370C8u;
    // 0x1370c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1370c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1370ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370d0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1370D0u;
    SET_GPR_U32(ctx, 31, 0x1370D8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1370D0u, 0x1370D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370D8u;
label_1370d8:
    // 0x1370d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1370d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370dc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1370dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1370e0: 0x248426b0  addiu       $a0, $a0, 0x26B0
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9904));
    // 0x1370e4: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1370e8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1370e8u;
    { uint32_t bits = FAST_READ32(0x4E26B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1370ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1370ecu;
    { uint32_t bits = FAST_READ32(0x4E26B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1370f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1370f0u;
    { uint32_t bits = FAST_READ32(0x4E26B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370f4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1370f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1370f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1370f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1370fc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1370fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x137100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x137100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137104: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x137104u;
    {
        const bool branch_taken_0x137104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137104) {
            ctx->pc = 0x137184u;
            goto label_137184;
        }
    }
    ctx->pc = 0x13710Cu;
label_13710c:
    // 0x13710c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13710cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x137110: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x137114: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x137118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13711c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x13711Cu;
    SET_GPR_U32(ctx, 31, 0x137124u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x13711Cu, 0x137124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137124u;
label_137124:
    // 0x137124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137128: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x137128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x13712c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13712cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x137130: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x137134: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x137138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13713c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x13713Cu;
    SET_GPR_U32(ctx, 31, 0x137144u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x13713Cu, 0x137144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137144u;
label_137144:
    // 0x137144: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137148: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x137148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13714c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x13714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137150: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x137150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137154: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x137154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137158: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x137158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x13715c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13715cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137160: 0x0  nop
    ctx->pc = 0x137160u;
    // NOP
    // 0x137164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137168: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x137168u;
    {
        const bool branch_taken_0x137168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137168) {
            ctx->pc = 0x137180u;
            goto label_137180;
        }
    }
    ctx->pc = 0x137170u;
    // 0x137170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137174: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x137174u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x137178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x137178u;
    {
        const bool branch_taken_0x137178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137178) {
            ctx->pc = 0x137190u;
            goto label_137190;
        }
    }
    ctx->pc = 0x137180u;
label_137180:
    // 0x137180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137184:
    // 0x137184: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x137184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x137188: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x137188u;
    {
        const bool branch_taken_0x137188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137188) {
            ctx->pc = 0x13710Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13710c;
        }
    }
    ctx->pc = 0x137190u;
label_137190:
    // 0x137190: 0x12a0009d  beqz        $s5, . + 4 + (0x9D << 2)
    ctx->pc = 0x137190u;
    {
        const bool branch_taken_0x137190 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x137190) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137198u;
label_137198:
    // 0x137198: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13719c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x13719Cu;
    SET_GPR_U32(ctx, 31, 0x1371A4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x13719Cu, 0x1371A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371A4u;
label_1371a4:
    // 0x1371a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1371a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371a8: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x1371a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x1371ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1371acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371b0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x1371B0u;
    SET_GPR_U32(ctx, 31, 0x1371B8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1371B0u, 0x1371B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371B8u;
label_1371b8:
    // 0x1371b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1371b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371bc: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1371bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1371c0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1371C0u;
    {
        const bool branch_taken_0x1371c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1371c0) {
            ctx->pc = 0x1371ECu;
            goto label_1371ec;
        }
    }
    ctx->pc = 0x1371C8u;
    // 0x1371c8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1371cc: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1371CCu;
    SET_GPR_U32(ctx, 31, 0x1371D4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1371CCu, 0x1371D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371D4u;
label_1371d4:
    // 0x1371d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1371d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1371d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1371dc: 0x24a526a0  addiu       $a1, $a1, 0x26A0
    ctx->pc = 0x1371dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    // 0x1371e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371e4: 0xc041b24  jal         func_106C90
    ctx->pc = 0x1371E4u;
    SET_GPR_U32(ctx, 31, 0x1371ECu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1371E4u, 0x1371ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371ECu;
label_1371ec:
    // 0x1371ec: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1371ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1371f0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1371F0u;
    SET_GPR_U32(ctx, 31, 0x1371F8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1371F0u, 0x1371F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371F8u;
label_1371f8:
    // 0x1371f8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1371fc: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x137200: 0x33023  negu        $a2, $v1
    ctx->pc = 0x137200u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x137204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137208: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x13720c: 0xc040924  jal         func_102490
    ctx->pc = 0x13720Cu;
    SET_GPR_U32(ctx, 31, 0x137214u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x13720Cu, 0x137214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137214u;
label_137214:
    // 0x137214: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137218: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x137218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x13721c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x13721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x137220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137224: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x137224u;
    SET_GPR_U32(ctx, 31, 0x13722Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x137224u, 0x13722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13722Cu;
label_13722c:
    // 0x13722c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x13722Cu;
    {
        const bool branch_taken_0x13722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13722c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137234u;
label_137234:
    // 0x137234: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x137234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13723c: 0xc08d95c  jal         func_236570
    ctx->pc = 0x13723Cu;
    SET_GPR_U32(ctx, 31, 0x137244u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x13723Cu, 0x137244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137244u;
label_137244:
    // 0x137244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x137244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137248: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13724c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x13724Cu;
    SET_GPR_U32(ctx, 31, 0x137254u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x13724Cu, 0x137254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137254u;
label_137254:
    // 0x137254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137258: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x137258u;
    SET_GPR_U32(ctx, 31, 0x137260u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x137258u, 0x137260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137260u;
label_137260:
    // 0x137260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137264: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x137264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x137268: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x137268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x13726c: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x13726Cu;
    {
        const bool branch_taken_0x13726c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13726c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137274u;
    // 0x137274: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x137278: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13727c: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x13727cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x137280: 0x1812  mflo        $v1
    ctx->pc = 0x137280u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x137284: 0x14830060  bne         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x137284u;
    {
        const bool branch_taken_0x137284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x137284) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x13728Cu;
    // 0x13728c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x13728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x137290: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x137290u;
    SET_GPR_U32(ctx, 31, 0x137298u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x137290u, 0x137298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137298u;
label_137298:
    // 0x137298: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13729c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372a0: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x1372a4: 0x8c660038  lw          $a2, 0x38($v1)
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1372a8: 0xc040924  jal         func_102490
    ctx->pc = 0x1372A8u;
    SET_GPR_U32(ctx, 31, 0x1372B0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x1372A8u, 0x1372B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372B0u;
label_1372b0:
    // 0x1372b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1372b4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1372b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1372b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1372bc: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1372bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1372c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1372c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1372c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1372c8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1372c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1372cc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1372ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1372d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1372d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372d4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x1372D4u;
    SET_GPR_U32(ctx, 31, 0x1372DCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1372D4u, 0x1372DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372DCu;
label_1372dc:
    // 0x1372dc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1372DCu;
    {
        const bool branch_taken_0x1372dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1372dc) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1372E4u;
label_1372e4:
    // 0x1372e4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1372e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1372e8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1372e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1372ec: 0xc7808c48  lwc1        $f0, -0x73B8($gp)
    ctx->pc = 0x1372ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1372f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1372f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1372f4: 0xe7808c48  swc1        $f0, -0x73B8($gp)
    ctx->pc = 0x1372f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), bits); }
    // 0x1372f8: 0xc7818c48  lwc1        $f1, -0x73B8($gp)
    ctx->pc = 0x1372f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1372fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1372fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137300: 0x0  nop
    ctx->pc = 0x137300u;
    // NOP
    // 0x137304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x137304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137308: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x137308u;
    {
        const bool branch_taken_0x137308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137308) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137310u;
    // 0x137310: 0xc7818c48  lwc1        $f1, -0x73B8($gp)
    ctx->pc = 0x137310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x137318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13731c: 0x0  nop
    ctx->pc = 0x13731cu;
    // NOP
    // 0x137320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x137320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x137324: 0xe7808c48  swc1        $f0, -0x73B8($gp)
    ctx->pc = 0x137324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), bits); }
    // 0x137328: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13732c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x13732Cu;
    SET_GPR_U32(ctx, 31, 0x137334u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x13732Cu, 0x137334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137334u;
label_137334:
    // 0x137334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137338: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x137338u;
    SET_GPR_U32(ctx, 31, 0x137340u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x137338u, 0x137340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137340u;
label_137340:
    // 0x137340: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x137340u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137344: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x137348: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x137348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13734c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x13734Cu;
    {
        const bool branch_taken_0x13734c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13734c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137354u;
    // 0x137354: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x137354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x137358: 0x24847fb0  addiu       $a0, $a0, 0x7FB0
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32688));
    // 0x13735c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137364: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137368: 0x600008  jr          $v1
    ctx->pc = 0x137368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137370u: goto label_137370;
            case 0x137384u: goto label_137384;
            case 0x137398u: goto label_137398;
            case 0x1373ACu: goto label_1373ac;
            case 0x1373C0u: goto label_1373c0;
            case 0x1373D4u: goto label_1373d4;
            case 0x1373E8u: goto label_1373e8;
            case 0x1373FCu: goto label_1373fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137368u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x137370u;
label_137370:
    // 0x137370: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137374: 0xc0522e4  jal         func_148B90
    ctx->pc = 0x137374u;
    SET_GPR_U32(ctx, 31, 0x13737Cu);
    ctx->pc = 0x148B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148B90u, 0x137374u, 0x13737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13737Cu;
label_13737c:
    // 0x13737c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x13737Cu;
    {
        const bool branch_taken_0x13737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13737c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137384u;
label_137384:
    // 0x137384: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x137384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137388: 0xc0519c0  jal         func_146700
    ctx->pc = 0x137388u;
    SET_GPR_U32(ctx, 31, 0x137390u);
    ctx->pc = 0x146700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146700u, 0x137388u, 0x137390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137390u;
label_137390:
    // 0x137390: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x137390u;
    {
        const bool branch_taken_0x137390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137390) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x137398u;
label_137398:
    // 0x137398: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13739c: 0xc051b40  jal         func_146D00
    ctx->pc = 0x13739Cu;
    SET_GPR_U32(ctx, 31, 0x1373A4u);
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x13739Cu, 0x1373A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373A4u;
label_1373a4:
    // 0x1373a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1373A4u;
    {
        const bool branch_taken_0x1373a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373a4) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1373ACu;
label_1373ac:
    // 0x1373ac: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1373b0: 0xc051d24  jal         func_147490
    ctx->pc = 0x1373B0u;
    SET_GPR_U32(ctx, 31, 0x1373B8u);
    ctx->pc = 0x147490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147490u, 0x1373B0u, 0x1373B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373B8u;
label_1373b8:
    // 0x1373b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1373B8u;
    {
        const bool branch_taken_0x1373b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373b8) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1373C0u;
label_1373c0:
    // 0x1373c0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1373c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1373c4: 0xc051ef0  jal         func_147BC0
    ctx->pc = 0x1373C4u;
    SET_GPR_U32(ctx, 31, 0x1373CCu);
    ctx->pc = 0x147BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BC0u, 0x1373C4u, 0x1373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1373CCu;
    {
        const bool branch_taken_0x1373cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373cc) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1373D4u;
label_1373d4:
    // 0x1373d4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1373d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1373d8: 0xc052044  jal         func_148110
    ctx->pc = 0x1373D8u;
    SET_GPR_U32(ctx, 31, 0x1373E0u);
    ctx->pc = 0x148110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148110u, 0x1373D8u, 0x1373E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373E0u;
label_1373e0:
    // 0x1373e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1373E0u;
    {
        const bool branch_taken_0x1373e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373e0) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1373E8u;
label_1373e8:
    // 0x1373e8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1373e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1373ec: 0xc0521e4  jal         func_148790
    ctx->pc = 0x1373ECu;
    SET_GPR_U32(ctx, 31, 0x1373F4u);
    ctx->pc = 0x148790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148790u, 0x1373ECu, 0x1373F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373F4u;
label_1373f4:
    // 0x1373f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1373F4u;
    {
        const bool branch_taken_0x1373f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373f4) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x1373FCu;
label_1373fc:
    // 0x1373fc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1373fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137400: 0xc052290  jal         func_148A40
    ctx->pc = 0x137400u;
    SET_GPR_U32(ctx, 31, 0x137408u);
    ctx->pc = 0x148A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148A40u, 0x137400u, 0x137408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137408u;
label_137408:
    // 0x137408: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x137408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13740c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13740cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x137410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137414: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x137414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137418: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13741c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13741cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13742c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13742cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137430: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x137434: 0x3e00008  jr          $ra
    ctx->pc = 0x137434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13743Cu;
    // 0x13743c: 0x0  nop
    ctx->pc = 0x13743cu;
    // NOP
    ctx->pc = 0x137440u;
}
