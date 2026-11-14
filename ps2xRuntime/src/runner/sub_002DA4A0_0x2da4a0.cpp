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

// Function: sub_002DA4A0
// Address: 0x2da4a0 - 0x2da9f0
void sub_002DA4A0_0x2da4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA4A0_0x2da4a0");
#endif

    switch (ctx->pc) {
        case 0x2da4b8u: goto label_2da4b8;
        case 0x2da52cu: goto label_2da52c;
        case 0x2da564u: goto label_2da564;
        case 0x2da578u: goto label_2da578;
        case 0x2da588u: goto label_2da588;
        case 0x2da5a0u: goto label_2da5a0;
        case 0x2da5acu: goto label_2da5ac;
        case 0x2da5c0u: goto label_2da5c0;
        case 0x2da5e0u: goto label_2da5e0;
        case 0x2da5f4u: goto label_2da5f4;
        case 0x2da61cu: goto label_2da61c;
        case 0x2da638u: goto label_2da638;
        case 0x2da650u: goto label_2da650;
        case 0x2da664u: goto label_2da664;
        case 0x2da694u: goto label_2da694;
        case 0x2da6c4u: goto label_2da6c4;
        case 0x2da6e4u: goto label_2da6e4;
        case 0x2da6fcu: goto label_2da6fc;
        case 0x2da71cu: goto label_2da71c;
        case 0x2da72cu: goto label_2da72c;
        case 0x2da758u: goto label_2da758;
        case 0x2da780u: goto label_2da780;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7dcu: goto label_2da7dc;
        case 0x2da7fcu: goto label_2da7fc;
        case 0x2da830u: goto label_2da830;
        case 0x2da83cu: goto label_2da83c;
        case 0x2da86cu: goto label_2da86c;
        case 0x2da880u: goto label_2da880;
        case 0x2da8acu: goto label_2da8ac;
        case 0x2da8c0u: goto label_2da8c0;
        case 0x2da8e0u: goto label_2da8e0;
        case 0x2da8f4u: goto label_2da8f4;
        case 0x2da920u: goto label_2da920;
        case 0x2da930u: goto label_2da930;
        case 0x2da948u: goto label_2da948;
        case 0x2da9bcu: goto label_2da9bc;
        case 0x2da9dcu: goto label_2da9dc;
        default: break;
    }

    ctx->pc = 0x2da4a0u;

    // 0x2da4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da4a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2da4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2da4ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2da4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da4b0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2DA4B0u;
    SET_GPR_U32(ctx, 31, 0x2DA4B8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2DA4B0u, 0x2DA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4B8u;
label_2da4b8:
    // 0x2da4b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2da4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2da4bc: 0x246368d0  addiu       $v1, $v1, 0x68D0
    ctx->pc = 0x2da4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26832));
    // 0x2da4c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da4c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da4c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da4cc: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2da4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2da4d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da4d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2da4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2da4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA4E4u;
    // 0x2da4e4: 0x0  nop
    ctx->pc = 0x2da4e4u;
    // NOP
    // 0x2da4e8: 0x0  nop
    ctx->pc = 0x2da4e8u;
    // NOP
    // 0x2da4ec: 0x0  nop
    ctx->pc = 0x2da4ecu;
    // NOP
    // 0x2da4f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2da4f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2da4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2da4f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2da4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2da4fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2da4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2da500: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2da500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2da504: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2da504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2da508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2da508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2da50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2da50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2da510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da51c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2da51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2da520: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da524: 0xc09d248  jal         func_274920
    ctx->pc = 0x2DA524u;
    SET_GPR_U32(ctx, 31, 0x2DA52Cu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2DA524u, 0x2DA52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA52Cu;
label_2da52c:
    // 0x2da52c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2da530: 0x10430101  beq         $v0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x2DA530u;
    {
        const bool branch_taken_0x2da530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2da530) {
            ctx->pc = 0x2DA938u;
            goto label_2da938;
        }
    }
    ctx->pc = 0x2DA538u;
    // 0x2da538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2da538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da53c: 0x10430102  beq         $v0, $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x2DA53Cu;
    {
        const bool branch_taken_0x2da53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2da53c) {
            ctx->pc = 0x2DA948u;
            goto label_2da948;
        }
    }
    ctx->pc = 0x2DA544u;
    // 0x2da544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da548: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA548u;
    {
        const bool branch_taken_0x2da548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2da548) {
            ctx->pc = 0x2DA558u;
            goto label_2da558;
        }
    }
    ctx->pc = 0x2DA550u;
    // 0x2da550: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2DA550u;
    {
        const bool branch_taken_0x2da550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da550) {
            ctx->pc = 0x2DA948u;
            goto label_2da948;
        }
    }
    ctx->pc = 0x2DA558u;
label_2da558:
    // 0x2da558: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da55c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2DA55Cu;
    SET_GPR_U32(ctx, 31, 0x2DA564u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2DA55Cu, 0x2DA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA564u;
label_2da564:
    // 0x2da564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da568: 0x24050570  addiu       $a1, $zero, 0x570
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x2da56c: 0x2786a528  addiu       $a2, $gp, -0x5AD8
    ctx->pc = 0x2da56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944040));
    // 0x2da570: 0xc041a50  jal         func_106940
    ctx->pc = 0x2DA570u;
    SET_GPR_U32(ctx, 31, 0x2DA578u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2DA570u, 0x2DA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA578u;
label_2da578:
    // 0x2da578: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2da578u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da57c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2da57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da580: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2DA580u;
    SET_GPR_U32(ctx, 31, 0x2DA588u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2DA580u, 0x2DA588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA588u;
label_2da588:
    // 0x2da588: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA588u;
    {
        const bool branch_taken_0x2da588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da588) {
            ctx->pc = 0x2DA5F4u;
            goto label_2da5f4;
        }
    }
    ctx->pc = 0x2DA590u;
    // 0x2da590: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2da590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2da594: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2da594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da598: 0xc040304  jal         func_100C10
    ctx->pc = 0x2DA598u;
    SET_GPR_U32(ctx, 31, 0x2DA5A0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2DA598u, 0x2DA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5A0u;
label_2da5a0:
    // 0x2da5a0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2da5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2da5a4: 0xc045768  jal         func_115DA0
    ctx->pc = 0x2DA5A4u;
    SET_GPR_U32(ctx, 31, 0x2DA5ACu);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x2DA5A4u, 0x2DA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5ACu;
label_2da5ac:
    // 0x2da5ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5b0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2da5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2da5b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2da5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da5b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2DA5B8u;
    SET_GPR_U32(ctx, 31, 0x2DA5C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2DA5B8u, 0x2DA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5C0u;
label_2da5c0:
    // 0x2da5c0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA5C0u;
    {
        const bool branch_taken_0x2da5c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5c0) {
            ctx->pc = 0x2DA5F4u;
            goto label_2da5f4;
        }
    }
    ctx->pc = 0x2DA5C8u;
    // 0x2da5c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da5cc: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x2da5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x2da5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5d4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2da5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2da5d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA5D8u;
    SET_GPR_U32(ctx, 31, 0x2DA5E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA5D8u, 0x2DA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5E0u;
label_2da5e0:
    // 0x2da5e0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2da5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2da5e4: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x2da5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2da5e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2da5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da5ec: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2DA5ECu;
    SET_GPR_U32(ctx, 31, 0x2DA5F4u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2DA5ECu, 0x2DA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5F4u;
label_2da5f4:
    // 0x2da5f4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da5f8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2da5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da5fc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da600: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2da600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da604: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA604u;
    {
        const bool branch_taken_0x2da604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da604) {
            ctx->pc = 0x2DA624u;
            goto label_2da624;
        }
    }
    ctx->pc = 0x2DA60Cu;
    // 0x2da60c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da610: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2da610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2da614: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DA614u;
    SET_GPR_U32(ctx, 31, 0x2DA61Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DA614u, 0x2DA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA61Cu;
label_2da61c:
    // 0x2da61c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2DA61Cu;
    {
        const bool branch_taken_0x2da61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da61c) {
            ctx->pc = 0x2DA948u;
            goto label_2da948;
        }
    }
    ctx->pc = 0x2DA624u;
label_2da624:
    // 0x2da624: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da628: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2da628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da62c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2da62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2da630: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA630u;
    SET_GPR_U32(ctx, 31, 0x2DA638u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA630u, 0x2DA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA638u;
label_2da638:
    // 0x2da638: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2da638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da63c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da640: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2da640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da644: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2da644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2da648: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA648u;
    SET_GPR_U32(ctx, 31, 0x2DA650u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA648u, 0x2DA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA650u;
label_2da650:
    // 0x2da650: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2da650u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da654: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2da654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2da658: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2da658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da65c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DA65Cu;
    SET_GPR_U32(ctx, 31, 0x2DA664u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DA65Cu, 0x2DA664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA664u;
label_2da664:
    // 0x2da664: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2da668: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x2da668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2da66c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2da66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da670: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2da670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da674: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2da674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da678: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2da678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2da67c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2da67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2da680: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2da680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2da684: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2da684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2da688: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2da688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da68c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DA68Cu;
    SET_GPR_U32(ctx, 31, 0x2DA694u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DA68Cu, 0x2DA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA694u;
label_2da694:
    // 0x2da694: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2da698: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2da698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2da69c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2da69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da6a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2da6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da6a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2da6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da6a8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2da6a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2da6ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2da6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2da6b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2da6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2da6b4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2da6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2da6b8: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2da6bc: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2DA6BCu;
    SET_GPR_U32(ctx, 31, 0x2DA6C4u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2DA6BCu, 0x2DA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6C4u;
label_2da6c4:
    // 0x2da6c4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2da6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2da6c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2da6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2da6cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2da6d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2da6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6d4: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2da6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6dc: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2DA6DCu;
    SET_GPR_U32(ctx, 31, 0x2DA6E4u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2DA6DCu, 0x2DA6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6E4u;
label_2da6e4:
    // 0x2da6e4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2da6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da6e8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da6ec: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2da6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2da6f0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da6f4: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2DA6F4u;
    SET_GPR_U32(ctx, 31, 0x2DA6FCu);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2DA6F4u, 0x2DA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6FCu;
label_2da6fc:
    // 0x2da6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da700: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DA700u;
    {
        const bool branch_taken_0x2da700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da700) {
            ctx->pc = 0x2DA758u;
            goto label_2da758;
        }
    }
    ctx->pc = 0x2DA708u;
    // 0x2da708: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da70c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2da70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2da710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da714: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2DA714u;
    SET_GPR_U32(ctx, 31, 0x2DA71Cu);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2DA714u, 0x2DA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA71Cu;
label_2da71c:
    // 0x2da71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da720: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2da724: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA724u;
    SET_GPR_U32(ctx, 31, 0x2DA72Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA724u, 0x2DA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA72Cu;
label_2da72c:
    // 0x2da72c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2da72cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da730: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA730u;
    {
        const bool branch_taken_0x2da730 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da730) {
            ctx->pc = 0x2DA758u;
            goto label_2da758;
        }
    }
    ctx->pc = 0x2DA738u;
    // 0x2da738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2da738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da73c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2da740: 0x24a5e418  addiu       $a1, $a1, -0x1BE8
    ctx->pc = 0x2da740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960152));
    // 0x2da744: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2da744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da748: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2da748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2da74c: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x2da74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2da750: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x2DA750u;
    SET_GPR_U32(ctx, 31, 0x2DA758u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x2DA750u, 0x2DA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA758u;
label_2da758:
    // 0x2da758: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da75c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2da75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da760: 0x1202006f  beq         $s0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2DA760u;
    {
        const bool branch_taken_0x2da760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da760) {
            ctx->pc = 0x2DA920u;
            goto label_2da920;
        }
    }
    ctx->pc = 0x2DA768u;
    // 0x2da768: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2da768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da76c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da770: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2da770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2da774: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2da774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da778: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2DA778u;
    SET_GPR_U32(ctx, 31, 0x2DA780u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2DA778u, 0x2DA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA780u;
label_2da780:
    // 0x2da780: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA780u;
    {
        const bool branch_taken_0x2da780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da780) {
            ctx->pc = 0x2DA7A0u;
            goto label_2da7a0;
        }
    }
    ctx->pc = 0x2DA788u;
    // 0x2da788: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2da788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da78c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da790: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2da790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2da794: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2da794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da798: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2DA798u;
    SET_GPR_U32(ctx, 31, 0x2DA7A0u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2DA798u, 0x2DA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7A0u;
label_2da7a0:
    // 0x2da7a0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da7a4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2da7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da7a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2da7ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA7ACu;
    SET_GPR_U32(ctx, 31, 0x2DA7B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA7ACu, 0x2DA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7B4u;
label_2da7b4:
    // 0x2da7b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7b8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da7bc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2da7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da7c0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da7c4: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2da7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2da7c8: 0x8ca5003c  lw          $a1, 0x3C($a1)
    ctx->pc = 0x2da7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2da7cc: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x2da7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2da7d0: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x2da7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da7d4: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2DA7D4u;
    SET_GPR_U32(ctx, 31, 0x2DA7DCu);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2DA7D4u, 0x2DA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7DCu;
label_2da7dc:
    // 0x2da7dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2da7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da7e0: 0x0  nop
    ctx->pc = 0x2da7e0u;
    // NOP
    // 0x2da7e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2da7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da7e8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2DA7E8u;
    {
        const bool branch_taken_0x2da7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da7e8) {
            ctx->pc = 0x2DA8B4u;
            goto label_2da8b4;
        }
    }
    ctx->pc = 0x2DA7F0u;
    // 0x2da7f0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2da7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2da7f4: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2DA7F4u;
    SET_GPR_U32(ctx, 31, 0x2DA7FCu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2DA7F4u, 0x2DA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7FCu;
label_2da7fc:
    // 0x2da7fc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da800: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2da804: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2da804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2da808: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da80c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da810: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2da810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2da814: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da818: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2da818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da81c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2da81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2da820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da828: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2DA828u;
    SET_GPR_U32(ctx, 31, 0x2DA830u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2DA828u, 0x2DA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA830u;
label_2da830:
    // 0x2da830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2da830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da834: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2DA834u;
    SET_GPR_U32(ctx, 31, 0x2DA83Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2DA834u, 0x2DA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA83Cu;
label_2da83c:
    // 0x2da83c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA83Cu;
    {
        const bool branch_taken_0x2da83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da83c) {
            ctx->pc = 0x2DA86Cu;
            goto label_2da86c;
        }
    }
    ctx->pc = 0x2DA844u;
    // 0x2da844: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2da844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2da848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da84c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2da84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da850: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2da850u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da854: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2da854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2da858: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2da85c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2da85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da864: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2DA864u;
    SET_GPR_U32(ctx, 31, 0x2DA86Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2DA864u, 0x2DA86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA86Cu;
label_2da86c:
    // 0x2da86c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da870: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2da870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da874: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2da878: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA878u;
    SET_GPR_U32(ctx, 31, 0x2DA880u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA878u, 0x2DA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA880u;
label_2da880:
    // 0x2da880: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da884: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DA884u;
    {
        const bool branch_taken_0x2da884 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da884) {
            ctx->pc = 0x2DA920u;
            goto label_2da920;
        }
    }
    ctx->pc = 0x2DA88Cu;
    // 0x2da88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da890: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2da890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2da894: 0x24a5e428  addiu       $a1, $a1, -0x1BD8
    ctx->pc = 0x2da894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960168));
    // 0x2da898: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2da898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da89c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2da89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2da8a0: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2da8a4: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x2DA8A4u;
    SET_GPR_U32(ctx, 31, 0x2DA8ACu);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x2DA8A4u, 0x2DA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8ACu;
label_2da8ac:
    // 0x2da8ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA8ACu;
    {
        const bool branch_taken_0x2da8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8ac) {
            ctx->pc = 0x2DA920u;
            goto label_2da920;
        }
    }
    ctx->pc = 0x2DA8B4u;
label_2da8b4:
    // 0x2da8b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2da8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8b8: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DA8B8u;
    SET_GPR_U32(ctx, 31, 0x2DA8C0u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DA8B8u, 0x2DA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8C0u;
label_2da8c0:
    // 0x2da8c0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da8c4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2da8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da8c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da8cc: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x2da8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2da8d0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2da8d4: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x2da8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da8d8: 0xc0b4784  jal         func_2D1E10
    ctx->pc = 0x2DA8D8u;
    SET_GPR_U32(ctx, 31, 0x2DA8E0u);
    ctx->pc = 0x2D1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E10u, 0x2DA8D8u, 0x2DA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8E0u;
label_2da8e0:
    // 0x2da8e0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2da8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da8e4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2da8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2da8e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2da8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2da8ec: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA8ECu;
    SET_GPR_U32(ctx, 31, 0x2DA8F4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA8ECu, 0x2DA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8F4u;
label_2da8f4:
    // 0x2da8f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8f8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA8F8u;
    {
        const bool branch_taken_0x2da8f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8f8) {
            ctx->pc = 0x2DA920u;
            goto label_2da920;
        }
    }
    ctx->pc = 0x2DA900u;
    // 0x2da900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da904: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2da904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2da908: 0x24a5e438  addiu       $a1, $a1, -0x1BC8
    ctx->pc = 0x2da908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960184));
    // 0x2da90c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da910: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2da910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2da914: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x2da914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2da918: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x2DA918u;
    SET_GPR_U32(ctx, 31, 0x2DA920u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x2DA918u, 0x2DA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA920u;
label_2da920:
    // 0x2da920: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da924: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2da924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2da928: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DA928u;
    SET_GPR_U32(ctx, 31, 0x2DA930u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DA928u, 0x2DA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA930u;
label_2da930:
    // 0x2da930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA930u;
    {
        const bool branch_taken_0x2da930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da930) {
            ctx->pc = 0x2DA948u;
            goto label_2da948;
        }
    }
    ctx->pc = 0x2DA938u;
label_2da938:
    // 0x2da938: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2da93c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2da93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2da940: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DA940u;
    SET_GPR_U32(ctx, 31, 0x2DA948u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DA940u, 0x2DA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA948u;
label_2da948:
    // 0x2da948: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2da948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2da94c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2da94cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2da950: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2da950u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da954: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2da954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da958: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2da958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2da95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da970: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2da970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2da974: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA97Cu;
    // 0x2da97c: 0x0  nop
    ctx->pc = 0x2da97cu;
    // NOP
    // 0x2da980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2da988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2da98c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2da98cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2da990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da994: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA994u;
    {
        const bool branch_taken_0x2da994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da994) {
            ctx->pc = 0x2DA9DCu;
            goto label_2da9dc;
        }
    }
    ctx->pc = 0x2DA99Cu;
    // 0x2da99c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2da99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2da9a0: 0x246368d0  addiu       $v1, $v1, 0x68D0
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26832));
    // 0x2da9a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da9a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da9ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2da9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da9b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9b4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2DA9B4u;
    SET_GPR_U32(ctx, 31, 0x2DA9BCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2DA9B4u, 0x2DA9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9BCu;
label_2da9bc:
    // 0x2da9bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2da9bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da9c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2da9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2da9c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2da9c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2da9c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA9C8u;
    {
        const bool branch_taken_0x2da9c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da9c8) {
            ctx->pc = 0x2DA9DCu;
            goto label_2da9dc;
        }
    }
    ctx->pc = 0x2DA9D0u;
    // 0x2da9d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da9d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DA9D4u;
    SET_GPR_U32(ctx, 31, 0x2DA9DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DA9D4u, 0x2DA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9DCu;
label_2da9dc:
    // 0x2da9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2da9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da9e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2da9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2da9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9F0u;
}
