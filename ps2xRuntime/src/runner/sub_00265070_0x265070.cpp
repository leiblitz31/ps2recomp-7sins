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

// Function: sub_00265070
// Address: 0x265070 - 0x2653f0
void sub_00265070_0x265070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265070_0x265070");
#endif

    switch (ctx->pc) {
        case 0x2650c0u: goto label_2650c0;
        case 0x2650ccu: goto label_2650cc;
        case 0x26510cu: goto label_26510c;
        case 0x265128u: goto label_265128;
        case 0x265144u: goto label_265144;
        case 0x265180u: goto label_265180;
        case 0x26519cu: goto label_26519c;
        case 0x2651b8u: goto label_2651b8;
        case 0x2651dcu: goto label_2651dc;
        case 0x2651e8u: goto label_2651e8;
        case 0x26527cu: goto label_26527c;
        case 0x26529cu: goto label_26529c;
        case 0x2652bcu: goto label_2652bc;
        case 0x2652ecu: goto label_2652ec;
        case 0x265300u: goto label_265300;
        case 0x26532cu: goto label_26532c;
        case 0x265348u: goto label_265348;
        case 0x26535cu: goto label_26535c;
        case 0x265370u: goto label_265370;
        case 0x265380u: goto label_265380;
        case 0x2653a0u: goto label_2653a0;
        case 0x2653b4u: goto label_2653b4;
        default: break;
    }

    ctx->pc = 0x265070u;

    // 0x265070: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x265070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x265074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x265074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x265078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x265078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26507c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x265080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x265080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x265084: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x265084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x265088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x265088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26508c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26509c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x26509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2650a0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2650a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2650a4: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x2650a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x2650a8: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x2650a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
    // 0x2650ac: 0xa3a80120  sb          $t0, 0x120($sp)
    ctx->pc = 0x2650acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 8));
    // 0x2650b0: 0xa3a90130  sb          $t1, 0x130($sp)
    ctx->pc = 0x2650b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 9));
    // 0x2650b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2650b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2650b8: 0xc098770  jal         func_261DC0
    ctx->pc = 0x2650B8u;
    SET_GPR_U32(ctx, 31, 0x2650C0u);
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x2650B8u, 0x2650C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650C0u;
label_2650c0:
    // 0x2650c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2650c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2650c4: 0xc098908  jal         func_262420
    ctx->pc = 0x2650C4u;
    SET_GPR_U32(ctx, 31, 0x2650CCu);
    ctx->pc = 0x262420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262420u, 0x2650C4u, 0x2650CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650CCu;
label_2650cc:
    // 0x2650cc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2650ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2650d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2650d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2650d4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2650D4u;
    {
        const bool branch_taken_0x2650d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2650d4) {
            ctx->pc = 0x265130u;
            goto label_265130;
        }
    }
    ctx->pc = 0x2650DCu;
    // 0x2650dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2650dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2650e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2650E0u;
    {
        const bool branch_taken_0x2650e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2650e0) {
            ctx->pc = 0x265114u;
            goto label_265114;
        }
    }
    ctx->pc = 0x2650E8u;
    // 0x2650e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2650E8u;
    {
        const bool branch_taken_0x2650e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650e8) {
            ctx->pc = 0x2650F8u;
            goto label_2650f8;
        }
    }
    ctx->pc = 0x2650F0u;
    // 0x2650f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2650F0u;
    {
        const bool branch_taken_0x2650f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650f0) {
            ctx->pc = 0x265144u;
            goto label_265144;
        }
    }
    ctx->pc = 0x2650F8u;
label_2650f8:
    // 0x2650f8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2650fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x265100: 0x2785a090  addiu       $a1, $gp, -0x5F70
    ctx->pc = 0x265100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942864));
    // 0x265104: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x265104u;
    SET_GPR_U32(ctx, 31, 0x26510Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x265104u, 0x26510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26510Cu;
label_26510c:
    // 0x26510c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26510Cu;
    {
        const bool branch_taken_0x26510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26510c) {
            ctx->pc = 0x265144u;
            goto label_265144;
        }
    }
    ctx->pc = 0x265114u;
label_265114:
    // 0x265114: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x265114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265118: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x265118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26511c: 0x2785a098  addiu       $a1, $gp, -0x5F68
    ctx->pc = 0x26511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942872));
    // 0x265120: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x265120u;
    SET_GPR_U32(ctx, 31, 0x265128u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x265120u, 0x265128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265128u;
label_265128:
    // 0x265128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x265128u;
    {
        const bool branch_taken_0x265128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265128) {
            ctx->pc = 0x265144u;
            goto label_265144;
        }
    }
    ctx->pc = 0x265130u;
label_265130:
    // 0x265130: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265134: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x265134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x265138: 0x2785a0a0  addiu       $a1, $gp, -0x5F60
    ctx->pc = 0x265138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942880));
    // 0x26513c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x26513Cu;
    SET_GPR_U32(ctx, 31, 0x265144u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x26513Cu, 0x265144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265144u;
label_265144:
    // 0x265144: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x265144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x265148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x265148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26514c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26514Cu;
    {
        const bool branch_taken_0x26514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26514c) {
            ctx->pc = 0x2651A8u;
            goto label_2651a8;
        }
    }
    ctx->pc = 0x265154u;
    // 0x265154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265158: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x265158u;
    {
        const bool branch_taken_0x265158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265158) {
            ctx->pc = 0x26518Cu;
            goto label_26518c;
        }
    }
    ctx->pc = 0x265160u;
    // 0x265160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265160u;
    {
        const bool branch_taken_0x265160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265160) {
            ctx->pc = 0x265170u;
            goto label_265170;
        }
    }
    ctx->pc = 0x265168u;
    // 0x265168: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x265168u;
    {
        const bool branch_taken_0x265168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265168) {
            ctx->pc = 0x2651BCu;
            goto label_2651bc;
        }
    }
    ctx->pc = 0x265170u;
label_265170:
    // 0x265170: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x265170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x265174: 0x2785a0a8  addiu       $a1, $gp, -0x5F58
    ctx->pc = 0x265174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942888));
    // 0x265178: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x265178u;
    SET_GPR_U32(ctx, 31, 0x265180u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x265178u, 0x265180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265180u;
label_265180:
    // 0x265180: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x265180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x265184: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265184u;
    {
        const bool branch_taken_0x265184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265184) {
            ctx->pc = 0x2651BCu;
            goto label_2651bc;
        }
    }
    ctx->pc = 0x26518Cu;
label_26518c:
    // 0x26518c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x26518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x265190: 0x2785a0b0  addiu       $a1, $gp, -0x5F50
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942896));
    // 0x265194: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x265194u;
    SET_GPR_U32(ctx, 31, 0x26519Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x265194u, 0x26519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26519Cu;
label_26519c:
    // 0x26519c: 0x24130400  addiu       $s3, $zero, 0x400
    ctx->pc = 0x26519cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2651a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2651A0u;
    {
        const bool branch_taken_0x2651a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651a0) {
            ctx->pc = 0x2651BCu;
            goto label_2651bc;
        }
    }
    ctx->pc = 0x2651A8u;
label_2651a8:
    // 0x2651a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2651a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2651ac: 0x2785a0b4  addiu       $a1, $gp, -0x5F4C
    ctx->pc = 0x2651acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942900));
    // 0x2651b0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2651B0u;
    SET_GPR_U32(ctx, 31, 0x2651B8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2651B0u, 0x2651B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651B8u;
label_2651b8:
    // 0x2651b8: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x2651b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2651bc:
    // 0x2651bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2651bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2651c0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2651c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2651c4: 0x43b004  sllv        $s6, $v1, $v0
    ctx->pc = 0x2651c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2651c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2651c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2651d0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2651d4: 0xc098954  jal         func_262550
    ctx->pc = 0x2651D4u;
    SET_GPR_U32(ctx, 31, 0x2651DCu);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x2651D4u, 0x2651DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651DCu;
label_2651dc:
    // 0x2651dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2651dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2651E0u;
    {
        const bool branch_taken_0x2651e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651e0) {
            ctx->pc = 0x2652F0u;
            goto label_2652f0;
        }
    }
    ctx->pc = 0x2651E8u;
label_2651e8:
    // 0x2651e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2651e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2651ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2651ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2651f0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2651f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2651f4: 0x1682003d  bne         $s4, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2651F4u;
    {
        const bool branch_taken_0x2651f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2651f4) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2651FCu;
    // 0x2651fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2651fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x265200: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x265200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x265204: 0x16620039  bne         $s3, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x265204u;
    {
        const bool branch_taken_0x265204 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x265204) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x26520Cu;
    // 0x26520c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x265210: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x265210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x265214: 0x2c21026  xor         $v0, $s6, $v0
    ctx->pc = 0x265214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 2));
    // 0x265218: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x265218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26521c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x26521cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265220: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x265220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x265224: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x265224u;
    {
        const bool branch_taken_0x265224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265224) {
            ctx->pc = 0x2652C4u;
            goto label_2652c4;
        }
    }
    ctx->pc = 0x26522Cu;
    // 0x26522c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x265230: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x265230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x265234: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x265234u;
    {
        const bool branch_taken_0x265234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265234) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x26523Cu;
    // 0x26523c: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x26523cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x265240: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x265240u;
    {
        const bool branch_taken_0x265240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265240) {
            ctx->pc = 0x2652A4u;
            goto label_2652a4;
        }
    }
    ctx->pc = 0x265248u;
    // 0x265248: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x265248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26524c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x265250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265254: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x265254u;
    {
        const bool branch_taken_0x265254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265254) {
            ctx->pc = 0x265284u;
            goto label_265284;
        }
    }
    ctx->pc = 0x26525Cu;
    // 0x26525c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x26525Cu;
    {
        const bool branch_taken_0x26525c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26525c) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x265264u;
    // 0x265264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265268: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x265268u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26526c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265274: 0xc09913c  jal         func_2644F0
    ctx->pc = 0x265274u;
    SET_GPR_U32(ctx, 31, 0x26527Cu);
    ctx->pc = 0x2644F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F0u, 0x265274u, 0x26527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26527Cu;
label_26527c:
    // 0x26527c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26527Cu;
    {
        const bool branch_taken_0x26527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26527c) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x265284u;
label_265284:
    // 0x265284: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x265284u;
    {
        const bool branch_taken_0x265284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x265284) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x26528Cu;
    // 0x26528c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265294: 0xc09913c  jal         func_2644F0
    ctx->pc = 0x265294u;
    SET_GPR_U32(ctx, 31, 0x26529Cu);
    ctx->pc = 0x2644F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F0u, 0x265294u, 0x26529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26529Cu;
label_26529c:
    // 0x26529c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26529Cu;
    {
        const bool branch_taken_0x26529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26529c) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2652A4u;
label_2652a4:
    // 0x2652a4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2652A4u;
    {
        const bool branch_taken_0x2652a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652a4) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2652ACu;
    // 0x2652ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2652acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2652b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2652b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652b4: 0xc09913c  jal         func_2644F0
    ctx->pc = 0x2652B4u;
    SET_GPR_U32(ctx, 31, 0x2652BCu);
    ctx->pc = 0x2644F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F0u, 0x2652B4u, 0x2652BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652BCu;
label_2652bc:
    // 0x2652bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2652BCu;
    {
        const bool branch_taken_0x2652bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652bc) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2652C4u;
label_2652c4:
    // 0x2652c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2652c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2652c8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2652cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2652CCu;
    {
        const bool branch_taken_0x2652cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652cc) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2652D4u;
    // 0x2652d4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2652D4u;
    {
        const bool branch_taken_0x2652d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652d4) {
            ctx->pc = 0x2652ECu;
            goto label_2652ec;
        }
    }
    ctx->pc = 0x2652DCu;
    // 0x2652dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2652e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2652e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652e4: 0xc09913c  jal         func_2644F0
    ctx->pc = 0x2652E4u;
    SET_GPR_U32(ctx, 31, 0x2652ECu);
    ctx->pc = 0x2644F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F0u, 0x2652E4u, 0x2652ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652ECu;
label_2652ec:
    // 0x2652ec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2652ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2652f0:
    // 0x2652f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2652f4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2652f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2652f8: 0xc09894c  jal         func_262530
    ctx->pc = 0x2652F8u;
    SET_GPR_U32(ctx, 31, 0x265300u);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x2652F8u, 0x265300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265300u;
label_265300:
    // 0x265300: 0x1622ffb9  bne         $s1, $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x265300u;
    {
        const bool branch_taken_0x265300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x265300) {
            ctx->pc = 0x2651E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2651e8;
        }
    }
    ctx->pc = 0x265308u;
    // 0x265308: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x265308u;
    {
        const bool branch_taken_0x265308 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x265308) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x265310u;
    // 0x265310: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x265310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x265314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265314u;
    {
        const bool branch_taken_0x265314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265314) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x26531Cu;
    // 0x26531c: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x26531cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_265320:
    // 0x265320: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265324: 0xc0993d4  jal         func_264F50
    ctx->pc = 0x265324u;
    SET_GPR_U32(ctx, 31, 0x26532Cu);
    ctx->pc = 0x264F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F50u, 0x265324u, 0x26532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26532Cu;
label_26532c:
    // 0x26532c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26532Cu;
    {
        const bool branch_taken_0x26532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26532c) {
            ctx->pc = 0x265368u;
            goto label_265368;
        }
    }
    ctx->pc = 0x265334u;
    // 0x265334: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x265334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x265338: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x265338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26533c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265340: 0xc0994fc  jal         func_2653F0
    ctx->pc = 0x265340u;
    SET_GPR_U32(ctx, 31, 0x265348u);
    ctx->pc = 0x2653F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653F0u, 0x265340u, 0x265348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265348u;
label_265348:
    // 0x265348: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x265348u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26534c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265350: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265354: 0xc0986e8  jal         func_261BA0
    ctx->pc = 0x265354u;
    SET_GPR_U32(ctx, 31, 0x26535Cu);
    ctx->pc = 0x261BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BA0u, 0x265354u, 0x26535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26535Cu;
label_26535c:
    // 0x26535c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x26535cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265360: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x265360u;
    {
        const bool branch_taken_0x265360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265360) {
            ctx->pc = 0x2653B8u;
            goto label_2653b8;
        }
    }
    ctx->pc = 0x265368u;
label_265368:
    // 0x265368: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x265368u;
    SET_GPR_U32(ctx, 31, 0x265370u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x265368u, 0x265370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265370u;
label_265370:
    // 0x265370: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x265370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x265374: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x265374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265378: 0xc0991f4  jal         func_2647D0
    ctx->pc = 0x265378u;
    SET_GPR_U32(ctx, 31, 0x265380u);
    ctx->pc = 0x2647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2647D0u, 0x265378u, 0x265380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265380u;
label_265380:
    // 0x265380: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x265380u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x265384: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x265384u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x265388: 0x1010  mfhi        $v0
    ctx->pc = 0x265388u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26538c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x26538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x265390: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x265390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x265394: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x265394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x265398: 0xc0994fc  jal         func_2653F0
    ctx->pc = 0x265398u;
    SET_GPR_U32(ctx, 31, 0x2653A0u);
    ctx->pc = 0x2653F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653F0u, 0x265398u, 0x2653A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653A0u;
label_2653a0:
    // 0x2653a0: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2653a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2653a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2653a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2653a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2653a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2653ac: 0xc0986e8  jal         func_261BA0
    ctx->pc = 0x2653ACu;
    SET_GPR_U32(ctx, 31, 0x2653B4u);
    ctx->pc = 0x261BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BA0u, 0x2653ACu, 0x2653B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653B4u;
label_2653b4:
    // 0x2653b4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2653b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2653b8:
    // 0x2653b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2653b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2653bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2653bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2653c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2653c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2653c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2653c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2653c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2653c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2653cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2653ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2653d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2653d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2653d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2653d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2653d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2653d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2653dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2653dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2653e0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2653e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2653e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2653E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2653ECu;
    // 0x2653ec: 0x0  nop
    ctx->pc = 0x2653ecu;
    // NOP
    ctx->pc = 0x2653f0u;
}
