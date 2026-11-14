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

// Function: sub_002D9440
// Address: 0x2d9440 - 0x2d9be0
void sub_002D9440_0x2d9440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9440_0x2d9440");
#endif

    switch (ctx->pc) {
        case 0x2d9470u: goto label_2d9470;
        case 0x2d947cu: goto label_2d947c;
        case 0x2d9488u: goto label_2d9488;
        case 0x2d949cu: goto label_2d949c;
        case 0x2d94b8u: goto label_2d94b8;
        case 0x2d94e4u: goto label_2d94e4;
        case 0x2d954cu: goto label_2d954c;
        case 0x2d9584u: goto label_2d9584;
        case 0x2d9598u: goto label_2d9598;
        case 0x2d95a8u: goto label_2d95a8;
        case 0x2d95b4u: goto label_2d95b4;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95d8u: goto label_2d95d8;
        case 0x2d95e4u: goto label_2d95e4;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d961cu: goto label_2d961c;
        case 0x2d9630u: goto label_2d9630;
        case 0x2d9640u: goto label_2d9640;
        case 0x2d9654u: goto label_2d9654;
        case 0x2d9668u: goto label_2d9668;
        case 0x2d9688u: goto label_2d9688;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d96a8u: goto label_2d96a8;
        case 0x2d96bcu: goto label_2d96bc;
        case 0x2d96d0u: goto label_2d96d0;
        case 0x2d96ecu: goto label_2d96ec;
        case 0x2d9710u: goto label_2d9710;
        case 0x2d9724u: goto label_2d9724;
        case 0x2d973cu: goto label_2d973c;
        case 0x2d9758u: goto label_2d9758;
        case 0x2d9764u: goto label_2d9764;
        case 0x2d9784u: goto label_2d9784;
        case 0x2d9794u: goto label_2d9794;
        case 0x2d97acu: goto label_2d97ac;
        case 0x2d97bcu: goto label_2d97bc;
        case 0x2d97ccu: goto label_2d97cc;
        case 0x2d97e0u: goto label_2d97e0;
        case 0x2d97f4u: goto label_2d97f4;
        case 0x2d980cu: goto label_2d980c;
        case 0x2d981cu: goto label_2d981c;
        case 0x2d9828u: goto label_2d9828;
        case 0x2d9838u: goto label_2d9838;
        case 0x2d9848u: goto label_2d9848;
        case 0x2d9854u: goto label_2d9854;
        case 0x2d9898u: goto label_2d9898;
        case 0x2d98a8u: goto label_2d98a8;
        case 0x2d98c0u: goto label_2d98c0;
        case 0x2d98d0u: goto label_2d98d0;
        case 0x2d98e0u: goto label_2d98e0;
        case 0x2d98f4u: goto label_2d98f4;
        case 0x2d9904u: goto label_2d9904;
        case 0x2d9918u: goto label_2d9918;
        case 0x2d993cu: goto label_2d993c;
        case 0x2d994cu: goto label_2d994c;
        case 0x2d9960u: goto label_2d9960;
        case 0x2d9984u: goto label_2d9984;
        case 0x2d99acu: goto label_2d99ac;
        case 0x2d99d4u: goto label_2d99d4;
        case 0x2d99e0u: goto label_2d99e0;
        case 0x2d99ecu: goto label_2d99ec;
        case 0x2d99fcu: goto label_2d99fc;
        case 0x2d9a24u: goto label_2d9a24;
        case 0x2d9a48u: goto label_2d9a48;
        case 0x2d9a6cu: goto label_2d9a6c;
        case 0x2d9a80u: goto label_2d9a80;
        case 0x2d9a98u: goto label_2d9a98;
        case 0x2d9ab0u: goto label_2d9ab0;
        case 0x2d9abcu: goto label_2d9abc;
        case 0x2d9adcu: goto label_2d9adc;
        case 0x2d9aecu: goto label_2d9aec;
        case 0x2d9b04u: goto label_2d9b04;
        case 0x2d9b14u: goto label_2d9b14;
        case 0x2d9b24u: goto label_2d9b24;
        case 0x2d9b38u: goto label_2d9b38;
        case 0x2d9b60u: goto label_2d9b60;
        case 0x2d9b70u: goto label_2d9b70;
        case 0x2d9b80u: goto label_2d9b80;
        case 0x2d9b90u: goto label_2d9b90;
        case 0x2d9ba8u: goto label_2d9ba8;
        default: break;
    }

    ctx->pc = 0x2d9440u;

label_2d9440:
    // 0x2d9440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d9444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d944c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9454: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2d9454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2d9458: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2d9458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2d945c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9460: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d9460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9464: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2d9464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2d9468: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x2D9468u;
    SET_GPR_U32(ctx, 31, 0x2D9470u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2D9468u, 0x2D9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9470u;
label_2d9470:
    // 0x2d9470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9474: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x2D9474u;
    SET_GPR_U32(ctx, 31, 0x2D947Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2D9474u, 0x2D947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D947Cu;
label_2d947c:
    // 0x2d947c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9480: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9480u;
    {
        const bool branch_taken_0x2d9480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9480) {
            ctx->pc = 0x2D94D0u;
            goto label_2d94d0;
        }
    }
    ctx->pc = 0x2D9488u;
label_2d9488:
    // 0x2d9488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d948c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9490: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d9494: 0xc045944  jal         func_116510
    ctx->pc = 0x2D9494u;
    SET_GPR_U32(ctx, 31, 0x2D949Cu);
    ctx->pc = 0x116510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116510u, 0x2D9494u, 0x2D949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D949Cu;
label_2d949c:
    // 0x2d949c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d949cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94a0: 0x1011000b  beq         $zero, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D94A0u;
    {
        const bool branch_taken_0x2d94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d94a0) {
            ctx->pc = 0x2D94D0u;
            goto label_2d94d0;
        }
    }
    ctx->pc = 0x2D94A8u;
    // 0x2d94a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d94a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d94ac: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2d94acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d94b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2D94B0u;
    SET_GPR_U32(ctx, 31, 0x2D94B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2D94B0u, 0x2D94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94B8u;
label_2d94b8:
    // 0x2d94b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D94B8u;
    {
        const bool branch_taken_0x2d94b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d94b8) {
            ctx->pc = 0x2D94D0u;
            goto label_2d94d0;
        }
    }
    ctx->pc = 0x2D94C0u;
    // 0x2d94c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d94c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d94c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d94c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D94C8u;
    {
        const bool branch_taken_0x2d94c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d94c8) {
            ctx->pc = 0x2D94ECu;
            goto label_2d94ec;
        }
    }
    ctx->pc = 0x2D94D0u;
label_2d94d0:
    // 0x2d94d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d94d4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2d94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d94d8: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x2d94d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2d94dc: 0xc0b9624  jal         func_2E5890
    ctx->pc = 0x2D94DCu;
    SET_GPR_U32(ctx, 31, 0x2D94E4u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x2D94DCu, 0x2D94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94E4u;
label_2d94e4:
    // 0x2d94e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D94E4u;
    {
        const bool branch_taken_0x2d94e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d94e4) {
            ctx->pc = 0x2D9488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D94ECu;
label_2d94ec:
    // 0x2d94ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d94ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d94f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d94f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d94f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d94f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d94f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d94fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d94fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9500: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9504: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D950Cu;
    // 0x2d950c: 0x0  nop
    ctx->pc = 0x2d950cu;
    // NOP
    // 0x2d9510: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2d9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2d9514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d9514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d9518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d951c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d9520: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d9524: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d9524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d9528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d952c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d953c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2d953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2d9540: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9544: 0xc09d248  jal         func_274920
    ctx->pc = 0x2D9544u;
    SET_GPR_U32(ctx, 31, 0x2D954Cu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2D9544u, 0x2D954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D954Cu;
label_2d954c:
    // 0x2d954c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9550: 0x10430191  beq         $v0, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x2D9550u;
    {
        const bool branch_taken_0x2d9550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9550) {
            ctx->pc = 0x2D9B98u;
            goto label_2d9b98;
        }
    }
    ctx->pc = 0x2D9558u;
    // 0x2d9558: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d9558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d955c: 0x10430192  beq         $v0, $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x2D955Cu;
    {
        const bool branch_taken_0x2d955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d955c) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D9564u;
    // 0x2d9564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9568: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9568u;
    {
        const bool branch_taken_0x2d9568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9568) {
            ctx->pc = 0x2D9578u;
            goto label_2d9578;
        }
    }
    ctx->pc = 0x2D9570u;
    // 0x2d9570: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x2D9570u;
    {
        const bool branch_taken_0x2d9570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9570) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D9578u;
label_2d9578:
    // 0x2d9578: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d957c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D957Cu;
    SET_GPR_U32(ctx, 31, 0x2D9584u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D957Cu, 0x2D9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9584u;
label_2d9584:
    // 0x2d9584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9588: 0x24050513  addiu       $a1, $zero, 0x513
    ctx->pc = 0x2d9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x2d958c: 0x2786a508  addiu       $a2, $gp, -0x5AF8
    ctx->pc = 0x2d958cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944008));
    // 0x2d9590: 0xc041a50  jal         func_106940
    ctx->pc = 0x2D9590u;
    SET_GPR_U32(ctx, 31, 0x2D9598u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2D9590u, 0x2D9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9598u;
label_2d9598:
    // 0x2d9598: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d9598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d959c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95a0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2D95A0u;
    SET_GPR_U32(ctx, 31, 0x2D95A8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2D95A0u, 0x2D95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95A8u;
label_2d95a8:
    // 0x2d95a8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d95ac: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D95ACu;
    SET_GPR_U32(ctx, 31, 0x2D95B4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D95ACu, 0x2D95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95B4u;
label_2d95b4:
    // 0x2d95b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d95b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95b8: 0x24050515  addiu       $a1, $zero, 0x515
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x2d95bc: 0x2786a508  addiu       $a2, $gp, -0x5AF8
    ctx->pc = 0x2d95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944008));
    // 0x2d95c0: 0xc041a50  jal         func_106940
    ctx->pc = 0x2D95C0u;
    SET_GPR_U32(ctx, 31, 0x2D95C8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2D95C0u, 0x2D95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95C8u;
label_2d95c8:
    // 0x2d95c8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d95cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d95ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95d0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2D95D0u;
    SET_GPR_U32(ctx, 31, 0x2D95D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2D95D0u, 0x2D95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95D8u;
label_2d95d8:
    // 0x2d95d8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d95dc: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D95DCu;
    SET_GPR_U32(ctx, 31, 0x2D95E4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D95DCu, 0x2D95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95E4u;
label_2d95e4:
    // 0x2d95e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d95e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95e8: 0x24050514  addiu       $a1, $zero, 0x514
    ctx->pc = 0x2d95e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x2d95ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d95ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95f0: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2D95F0u;
    SET_GPR_U32(ctx, 31, 0x2D95F8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2D95F0u, 0x2D95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95F8u;
label_2d95f8:
    // 0x2d95f8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2d95f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d95fc: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9600: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D9600u;
    SET_GPR_U32(ctx, 31, 0x2D9608u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D9600u, 0x2D9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9608u;
label_2d9608:
    // 0x2d9608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d960c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9610: 0x24050516  addiu       $a1, $zero, 0x516
    ctx->pc = 0x2d9610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x2d9614: 0xc042090  jal         func_108240
    ctx->pc = 0x2D9614u;
    SET_GPR_U32(ctx, 31, 0x2D961Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2D9614u, 0x2D961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D961Cu;
label_2d961c:
    // 0x2d961c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2d961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2d9620: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9624: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2d9624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2d9628: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2D9628u;
    SET_GPR_U32(ctx, 31, 0x2D9630u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2D9628u, 0x2D9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9630u;
label_2d9630:
    // 0x2d9630: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2d9630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2d9634: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9638: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D9638u;
    SET_GPR_U32(ctx, 31, 0x2D9640u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D9638u, 0x2D9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9640u;
label_2d9640:
    // 0x2d9640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9644: 0x24050517  addiu       $a1, $zero, 0x517
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x2d9648: 0x2786a508  addiu       $a2, $gp, -0x5AF8
    ctx->pc = 0x2d9648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944008));
    // 0x2d964c: 0xc041a50  jal         func_106940
    ctx->pc = 0x2D964Cu;
    SET_GPR_U32(ctx, 31, 0x2D9654u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2D964Cu, 0x2D9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9654u;
label_2d9654:
    // 0x2d9654: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2d9654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2d9658: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2d9658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d965c: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2d9660: 0xc0b6510  jal         func_2D9440
    ctx->pc = 0x2D9660u;
    SET_GPR_U32(ctx, 31, 0x2D9668u);
    ctx->pc = 0x2D9440u;
    goto label_2d9440;
    ctx->pc = 0x2D9668u;
label_2d9668:
    // 0x2d9668: 0xa3a2010f  sb          $v0, 0x10F($sp)
    ctx->pc = 0x2d9668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d966c: 0x93a2010f  lbu         $v0, 0x10F($sp)
    ctx->pc = 0x2d966cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x2d9670: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D9670u;
    {
        const bool branch_taken_0x2d9670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9670) {
            ctx->pc = 0x2D96B0u;
            goto label_2d96b0;
        }
    }
    ctx->pc = 0x2D9678u;
    // 0x2d9678: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d967c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9680: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D9680u;
    SET_GPR_U32(ctx, 31, 0x2D9688u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D9680u, 0x2D9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9688u;
label_2d9688:
    // 0x2d9688: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d968c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9690: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D9690u;
    SET_GPR_U32(ctx, 31, 0x2D9698u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D9690u, 0x2D9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9698u;
label_2d9698:
    // 0x2d9698: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d969c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d96a0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D96A0u;
    SET_GPR_U32(ctx, 31, 0x2D96A8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D96A0u, 0x2D96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D96A8u;
label_2d96a8:
    // 0x2d96a8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2D96A8u;
    {
        const bool branch_taken_0x2d96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d96a8) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D96B0u;
label_2d96b0:
    // 0x2d96b0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d96b4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D96B4u;
    SET_GPR_U32(ctx, 31, 0x2D96BCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D96B4u, 0x2D96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D96BCu;
label_2d96bc:
    // 0x2d96bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d96c0: 0x2785a50c  addiu       $a1, $gp, -0x5AF4
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944012));
    // 0x2d96c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2d96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d96c8: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D96C8u;
    SET_GPR_U32(ctx, 31, 0x2D96D0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D96C8u, 0x2D96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D96D0u;
label_2d96d0:
    // 0x2d96d0: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2D96D0u;
    {
        const bool branch_taken_0x2d96d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d96d0) {
            ctx->pc = 0x2D99B4u;
            goto label_2d99b4;
        }
    }
    ctx->pc = 0x2D96D8u;
    // 0x2d96d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d96d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d96dc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d96e0: 0x2785a508  addiu       $a1, $gp, -0x5AF8
    ctx->pc = 0x2d96e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944008));
    // 0x2d96e4: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2D96E4u;
    SET_GPR_U32(ctx, 31, 0x2D96ECu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2D96E4u, 0x2D96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D96ECu;
label_2d96ec:
    // 0x2d96ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D96ECu;
    {
        const bool branch_taken_0x2d96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d96ec) {
            ctx->pc = 0x2D9704u;
            goto label_2d9704;
        }
    }
    ctx->pc = 0x2D96F4u;
    // 0x2d96f4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d96f8: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x2d96f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2d96fc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2D96FCu;
    {
        const bool branch_taken_0x2d96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d96fc) {
            ctx->pc = 0x2D9988u;
            goto label_2d9988;
        }
    }
    ctx->pc = 0x2D9704u;
label_2d9704:
    // 0x2d9704: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9708: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D9708u;
    SET_GPR_U32(ctx, 31, 0x2D9710u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D9708u, 0x2D9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9710u;
label_2d9710:
    // 0x2d9710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9714: 0x2785a510  addiu       $a1, $gp, -0x5AF0
    ctx->pc = 0x2d9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944016));
    // 0x2d9718: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2d9718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d971c: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D971Cu;
    SET_GPR_U32(ctx, 31, 0x2D9724u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D971Cu, 0x2D9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9724u;
label_2d9724:
    // 0x2d9724: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D9724u;
    {
        const bool branch_taken_0x2d9724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9724) {
            ctx->pc = 0x2D97D4u;
            goto label_2d97d4;
        }
    }
    ctx->pc = 0x2D972Cu;
    // 0x2d972c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9730: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2d9730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9734: 0xc0b6848  jal         func_2DA120
    ctx->pc = 0x2D9734u;
    SET_GPR_U32(ctx, 31, 0x2D973Cu);
    ctx->pc = 0x2DA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA120u, 0x2D9734u, 0x2D973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D973Cu;
label_2d973c:
    // 0x2d973c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2d973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x2d9740: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2d9740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2d9744: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9744u;
    {
        const bool branch_taken_0x2d9744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9744) {
            ctx->pc = 0x2D979Cu;
            goto label_2d979c;
        }
    }
    ctx->pc = 0x2D974Cu;
    // 0x2d974c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2d974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2d9750: 0xc0b6700  jal         func_2D9C00
    ctx->pc = 0x2D9750u;
    SET_GPR_U32(ctx, 31, 0x2D9758u);
    ctx->pc = 0x2D9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C00u, 0x2D9750u, 0x2D9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9758u;
label_2d9758:
    // 0x2d9758: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d9758u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d975c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D975Cu;
    {
        const bool branch_taken_0x2d975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d975c) {
            ctx->pc = 0x2D9788u;
            goto label_2d9788;
        }
    }
    ctx->pc = 0x2D9764u;
label_2d9764:
    // 0x2d9764: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2d9764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d9768: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d976c: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2d976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d9770: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d9770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d9774: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d9774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9778: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2d9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d977c: 0xc0b6708  jal         func_2D9C20
    ctx->pc = 0x2D977Cu;
    SET_GPR_U32(ctx, 31, 0x2D9784u);
    ctx->pc = 0x2D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C20u, 0x2D977Cu, 0x2D9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9784u;
label_2d9784:
    // 0x2d9784: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x2d9784u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_2d9788:
    // 0x2d9788: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2d9788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2d978c: 0xc0b66f8  jal         func_2D9BE0
    ctx->pc = 0x2D978Cu;
    SET_GPR_U32(ctx, 31, 0x2D9794u);
    ctx->pc = 0x2D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BE0u, 0x2D978Cu, 0x2D9794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9794u;
label_2d9794:
    // 0x2d9794: 0x16e2fff3  bne         $s7, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D9794u;
    {
        const bool branch_taken_0x2d9794 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9794) {
            ctx->pc = 0x2D9764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9764;
        }
    }
    ctx->pc = 0x2D979Cu;
label_2d979c:
    // 0x2d979c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d97a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d97a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d97a4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D97A4u;
    SET_GPR_U32(ctx, 31, 0x2D97ACu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D97A4u, 0x2D97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97ACu;
label_2d97ac:
    // 0x2d97ac: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d97b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d97b4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D97B4u;
    SET_GPR_U32(ctx, 31, 0x2D97BCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D97B4u, 0x2D97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97BCu;
label_2d97bc:
    // 0x2d97bc: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d97bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d97c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d97c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d97c4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D97C4u;
    SET_GPR_U32(ctx, 31, 0x2D97CCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D97C4u, 0x2D97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97CCu;
label_2d97cc:
    // 0x2d97cc: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x2D97CCu;
    {
        const bool branch_taken_0x2d97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d97cc) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D97D4u;
label_2d97d4:
    // 0x2d97d4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d97d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d97d8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D97D8u;
    SET_GPR_U32(ctx, 31, 0x2D97E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D97D8u, 0x2D97E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97E0u;
label_2d97e0:
    // 0x2d97e0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2d97e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2d97e4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2d97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2d97e8: 0x2484e408  addiu       $a0, $a0, -0x1BF8
    ctx->pc = 0x2d97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960136));
    // 0x2d97ec: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2D97ECu;
    SET_GPR_U32(ctx, 31, 0x2D97F4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2D97ECu, 0x2D97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97F4u;
label_2d97f4:
    // 0x2d97f4: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2d97f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d97f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d97fc: 0x24a5e408  addiu       $a1, $a1, -0x1BF8
    ctx->pc = 0x2d97fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960136));
    // 0x2d9800: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9804: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D9804u;
    SET_GPR_U32(ctx, 31, 0x2D980Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D9804u, 0x2D980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D980Cu;
label_2d980c:
    // 0x2d980c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D980Cu;
    {
        const bool branch_taken_0x2d980c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d980c) {
            ctx->pc = 0x2D98E8u;
            goto label_2d98e8;
        }
    }
    ctx->pc = 0x2D9814u;
    // 0x2d9814: 0xc090864  jal         func_242190
    ctx->pc = 0x2D9814u;
    SET_GPR_U32(ctx, 31, 0x2D981Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2D9814u, 0x2D981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D981Cu;
label_2d981c:
    // 0x2d981c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9820: 0xc090590  jal         func_241640
    ctx->pc = 0x2D9820u;
    SET_GPR_U32(ctx, 31, 0x2D9828u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2D9820u, 0x2D9828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9828u;
label_2d9828:
    // 0x2d9828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d982c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2d982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d9830: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2D9830u;
    SET_GPR_U32(ctx, 31, 0x2D9838u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2D9830u, 0x2D9838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9838u;
label_2d9838:
    // 0x2d9838: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2d9838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2d983c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2d983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2d9840: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2D9840u;
    SET_GPR_U32(ctx, 31, 0x2D9848u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2D9840u, 0x2D9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9848u;
label_2d9848:
    // 0x2d9848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d984c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D984Cu;
    {
        const bool branch_taken_0x2d984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d984c) {
            ctx->pc = 0x2D989Cu;
            goto label_2d989c;
        }
    }
    ctx->pc = 0x2D9854u;
label_2d9854:
    // 0x2d9854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9858: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d985c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2d985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2d9860: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D9860u;
    {
        const bool branch_taken_0x2d9860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9860) {
            ctx->pc = 0x2D9898u;
            goto label_2d9898;
        }
    }
    ctx->pc = 0x2D9868u;
    // 0x2d9868: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d986c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d9870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9874: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9874u;
    {
        const bool branch_taken_0x2d9874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9874) {
            ctx->pc = 0x2D9898u;
            goto label_2d9898;
        }
    }
    ctx->pc = 0x2D987Cu;
    // 0x2d987c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9880: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d9884: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9888: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d9888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d988c: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2d988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9890: 0xc0b6708  jal         func_2D9C20
    ctx->pc = 0x2D9890u;
    SET_GPR_U32(ctx, 31, 0x2D9898u);
    ctx->pc = 0x2D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C20u, 0x2D9890u, 0x2D9898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9898u;
label_2d9898:
    // 0x2d9898: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d989c:
    // 0x2d989c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2d989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2d98a0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2D98A0u;
    SET_GPR_U32(ctx, 31, 0x2D98A8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2D98A0u, 0x2D98A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98A8u;
label_2d98a8:
    // 0x2d98a8: 0x1602ffea  bne         $s0, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D98A8u;
    {
        const bool branch_taken_0x2d98a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d98a8) {
            ctx->pc = 0x2D9854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9854;
        }
    }
    ctx->pc = 0x2D98B0u;
    // 0x2d98b0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d98b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d98b8: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D98B8u;
    SET_GPR_U32(ctx, 31, 0x2D98C0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D98B8u, 0x2D98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98C0u;
label_2d98c0:
    // 0x2d98c0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d98c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d98c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d98c8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D98C8u;
    SET_GPR_U32(ctx, 31, 0x2D98D0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D98C8u, 0x2D98D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98D0u;
label_2d98d0:
    // 0x2d98d0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d98d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d98d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D98D8u;
    SET_GPR_U32(ctx, 31, 0x2D98E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D98D8u, 0x2D98E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98E0u;
label_2d98e0:
    // 0x2d98e0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2D98E0u;
    {
        const bool branch_taken_0x2d98e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98e0) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D98E8u;
label_2d98e8:
    // 0x2d98e8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d98ec: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D98ECu;
    SET_GPR_U32(ctx, 31, 0x2D98F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D98ECu, 0x2D98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98F4u;
label_2d98f4:
    // 0x2d98f4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2d98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2d98f8: 0x2784a518  addiu       $a0, $gp, -0x5AE8
    ctx->pc = 0x2d98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944024));
    // 0x2d98fc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2D98FCu;
    SET_GPR_U32(ctx, 31, 0x2D9904u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2D98FCu, 0x2D9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9904u;
label_2d9904:
    // 0x2d9904: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2d9904u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9908: 0x2785a518  addiu       $a1, $gp, -0x5AE8
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944024));
    // 0x2d990c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9910: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D9910u;
    SET_GPR_U32(ctx, 31, 0x2D9918u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D9910u, 0x2D9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9918u;
label_2d9918:
    // 0x2d9918: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9918u;
    {
        const bool branch_taken_0x2d9918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9918) {
            ctx->pc = 0x2D9930u;
            goto label_2d9930;
        }
    }
    ctx->pc = 0x2D9920u;
    // 0x2d9920: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d9920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9924: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x2d9924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2d9928: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9928u;
    {
        const bool branch_taken_0x2d9928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9928) {
            ctx->pc = 0x2D9988u;
            goto label_2d9988;
        }
    }
    ctx->pc = 0x2D9930u;
label_2d9930:
    // 0x2d9930: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9934: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D9934u;
    SET_GPR_U32(ctx, 31, 0x2D993Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D9934u, 0x2D993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D993Cu;
label_2d993c:
    // 0x2d993c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2d993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2d9940: 0x2784a520  addiu       $a0, $gp, -0x5AE0
    ctx->pc = 0x2d9940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944032));
    // 0x2d9944: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2D9944u;
    SET_GPR_U32(ctx, 31, 0x2D994Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2D9944u, 0x2D994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D994Cu;
label_2d994c:
    // 0x2d994c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2d994cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d9950: 0x2785a520  addiu       $a1, $gp, -0x5AE0
    ctx->pc = 0x2d9950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944032));
    // 0x2d9954: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9958: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D9958u;
    SET_GPR_U32(ctx, 31, 0x2D9960u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D9958u, 0x2D9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9960u;
label_2d9960:
    // 0x2d9960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9960u;
    {
        const bool branch_taken_0x2d9960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9960) {
            ctx->pc = 0x2D9978u;
            goto label_2d9978;
        }
    }
    ctx->pc = 0x2D9968u;
    // 0x2d9968: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d996c: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x2d996cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2d9970: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9970u;
    {
        const bool branch_taken_0x2d9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9970) {
            ctx->pc = 0x2D9988u;
            goto label_2d9988;
        }
    }
    ctx->pc = 0x2D9978u;
label_2d9978:
    // 0x2d9978: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d997c: 0xc045768  jal         func_115DA0
    ctx->pc = 0x2D997Cu;
    SET_GPR_U32(ctx, 31, 0x2D9984u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x2D997Cu, 0x2D9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9984u;
label_2d9984:
    // 0x2d9984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9988:
    // 0x2d9988: 0x12200075  beqz        $s1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2D9988u;
    {
        const bool branch_taken_0x2d9988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9988) {
            ctx->pc = 0x2D9B60u;
            goto label_2d9b60;
        }
    }
    ctx->pc = 0x2D9990u;
    // 0x2d9990: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9994: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2d9994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d9998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d999c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d999cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99a0: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2d99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d99a4: 0xc0b6708  jal         func_2D9C20
    ctx->pc = 0x2D99A4u;
    SET_GPR_U32(ctx, 31, 0x2D99ACu);
    ctx->pc = 0x2D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C20u, 0x2D99A4u, 0x2D99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99ACu;
label_2d99ac:
    // 0x2d99ac: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2D99ACu;
    {
        const bool branch_taken_0x2d99ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99ac) {
            ctx->pc = 0x2D9B60u;
            goto label_2d9b60;
        }
    }
    ctx->pc = 0x2D99B4u;
label_2d99b4:
    // 0x2d99b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d99b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99b8: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d99bc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2d99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2d99c0: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2d99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2d99c4: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2d99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2d99c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d99cc: 0xc09d670  jal         func_2759C0
    ctx->pc = 0x2D99CCu;
    SET_GPR_U32(ctx, 31, 0x2D99D4u);
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x2D99CCu, 0x2D99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99D4u;
label_2d99d4:
    // 0x2d99d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d99d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D99D8u;
    {
        const bool branch_taken_0x2d99d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99d8) {
            ctx->pc = 0x2D9A14u;
            goto label_2d9a14;
        }
    }
    ctx->pc = 0x2D99E0u;
label_2d99e0:
    // 0x2d99e0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d99e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d99e4: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2D99E4u;
    SET_GPR_U32(ctx, 31, 0x2D99ECu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2D99E4u, 0x2D99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99ECu;
label_2d99ec:
    // 0x2d99ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d99f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d99f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99f4: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2D99F4u;
    SET_GPR_U32(ctx, 31, 0x2D99FCu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2D99F4u, 0x2D99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99FCu;
label_2d99fc:
    // 0x2d99fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D99FCu;
    {
        const bool branch_taken_0x2d99fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99fc) {
            ctx->pc = 0x2D9A10u;
            goto label_2d9a10;
        }
    }
    ctx->pc = 0x2D9A04u;
    // 0x2d9a04: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9A08u;
    {
        const bool branch_taken_0x2d9a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a08) {
            ctx->pc = 0x2D9A2Cu;
            goto label_2d9a2c;
        }
    }
    ctx->pc = 0x2D9A10u;
label_2d9a10:
    // 0x2d9a10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d9a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2d9a14:
    // 0x2d9a14: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2d9a18: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d9a1c: 0xc0b2e10  jal         func_2CB840
    ctx->pc = 0x2D9A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A24u);
    ctx->pc = 0x2CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB840u, 0x2D9A1Cu, 0x2D9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A24u;
label_2d9a24:
    // 0x2d9a24: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D9A24u;
    {
        const bool branch_taken_0x2d9a24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9a24) {
            ctx->pc = 0x2D99E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d99e0;
        }
    }
    ctx->pc = 0x2D9A2Cu;
label_2d9a2c:
    // 0x2d9a2c: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
    ctx->pc = 0x2D9A2Cu;
    {
        const bool branch_taken_0x2d9a2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a2c) {
            ctx->pc = 0x2D9B60u;
            goto label_2d9b60;
        }
    }
    ctx->pc = 0x2D9A34u;
    // 0x2d9a34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d9a34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a38: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9a3c: 0x2785a508  addiu       $a1, $gp, -0x5AF8
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944008));
    // 0x2d9a40: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2D9A40u;
    SET_GPR_U32(ctx, 31, 0x2D9A48u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2D9A40u, 0x2D9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A48u;
label_2d9a48:
    // 0x2d9a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9A48u;
    {
        const bool branch_taken_0x2d9a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a48) {
            ctx->pc = 0x2D9A60u;
            goto label_2d9a60;
        }
    }
    ctx->pc = 0x2D9A50u;
    // 0x2d9a50: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9a54: 0x8c55003c  lw          $s5, 0x3C($v0)
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2d9a58: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2D9A58u;
    {
        const bool branch_taken_0x2d9a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a58) {
            ctx->pc = 0x2D9B3Cu;
            goto label_2d9b3c;
        }
    }
    ctx->pc = 0x2D9A60u;
label_2d9a60:
    // 0x2d9a60: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9a64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2D9A64u;
    SET_GPR_U32(ctx, 31, 0x2D9A6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2D9A64u, 0x2D9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A6Cu;
label_2d9a6c:
    // 0x2d9a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a70: 0x2785a510  addiu       $a1, $gp, -0x5AF0
    ctx->pc = 0x2d9a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944016));
    // 0x2d9a74: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2d9a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9a78: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D9A78u;
    SET_GPR_U32(ctx, 31, 0x2D9A80u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D9A78u, 0x2D9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D9A80u;
    {
        const bool branch_taken_0x2d9a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a80) {
            ctx->pc = 0x2D9B2Cu;
            goto label_2d9b2c;
        }
    }
    ctx->pc = 0x2D9A88u;
    // 0x2d9a88: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9a8c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2d9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9a90: 0xc0b6848  jal         func_2DA120
    ctx->pc = 0x2D9A90u;
    SET_GPR_U32(ctx, 31, 0x2D9A98u);
    ctx->pc = 0x2DA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA120u, 0x2D9A90u, 0x2D9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A98u;
label_2d9a98:
    // 0x2d9a98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d9a98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a9c: 0x13c00015  beqz        $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9A9Cu;
    {
        const bool branch_taken_0x2d9a9c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a9c) {
            ctx->pc = 0x2D9AF4u;
            goto label_2d9af4;
        }
    }
    ctx->pc = 0x2D9AA4u;
    // 0x2d9aa4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d9aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9aa8: 0xc0b6700  jal         func_2D9C00
    ctx->pc = 0x2D9AA8u;
    SET_GPR_U32(ctx, 31, 0x2D9AB0u);
    ctx->pc = 0x2D9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C00u, 0x2D9AA8u, 0x2D9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AB0u;
label_2d9ab0:
    // 0x2d9ab0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d9ab0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D9AB4u;
    {
        const bool branch_taken_0x2d9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ab4) {
            ctx->pc = 0x2D9AE0u;
            goto label_2d9ae0;
        }
    }
    ctx->pc = 0x2D9ABCu;
label_2d9abc:
    // 0x2d9abc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d9ac0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9ac4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ac8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d9acc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d9accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ad0: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2d9ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9ad4: 0xc0b67fc  jal         func_2D9FF0
    ctx->pc = 0x2D9AD4u;
    SET_GPR_U32(ctx, 31, 0x2D9ADCu);
    ctx->pc = 0x2D9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9FF0u, 0x2D9AD4u, 0x2D9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9ADCu;
label_2d9adc:
    // 0x2d9adc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2d9ae0:
    // 0x2d9ae0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ae4: 0xc0b66f8  jal         func_2D9BE0
    ctx->pc = 0x2D9AE4u;
    SET_GPR_U32(ctx, 31, 0x2D9AECu);
    ctx->pc = 0x2D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BE0u, 0x2D9AE4u, 0x2D9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AECu;
label_2d9aec:
    // 0x2d9aec: 0x1682fff3  bne         $s4, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D9AECu;
    {
        const bool branch_taken_0x2d9aec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9aec) {
            ctx->pc = 0x2D9ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9abc;
        }
    }
    ctx->pc = 0x2D9AF4u;
label_2d9af4:
    // 0x2d9af4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9af8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d9af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9afc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D9AFCu;
    SET_GPR_U32(ctx, 31, 0x2D9B04u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D9AFCu, 0x2D9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B04u;
label_2d9b04:
    // 0x2d9b04: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9b08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d9b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9b0c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D9B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B14u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D9B0Cu, 0x2D9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B14u;
label_2d9b14:
    // 0x2d9b14: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d9b18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d9b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9b1c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D9B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D9B1Cu, 0x2D9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B24u;
label_2d9b24:
    // 0x2d9b24: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D9B24u;
    {
        const bool branch_taken_0x2d9b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b24) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D9B2Cu;
label_2d9b2c:
    // 0x2d9b2c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9b30: 0xc045768  jal         func_115DA0
    ctx->pc = 0x2D9B30u;
    SET_GPR_U32(ctx, 31, 0x2D9B38u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x2D9B30u, 0x2D9B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B38u;
label_2d9b38:
    // 0x2d9b38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d9b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b3c:
    // 0x2d9b3c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9B3Cu;
    {
        const bool branch_taken_0x2d9b3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b3c) {
            ctx->pc = 0x2D9B60u;
            goto label_2d9b60;
        }
    }
    ctx->pc = 0x2D9B44u;
    // 0x2d9b44: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9b48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d9b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d9b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b54: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2d9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9b58: 0xc0b67fc  jal         func_2D9FF0
    ctx->pc = 0x2D9B58u;
    SET_GPR_U32(ctx, 31, 0x2D9B60u);
    ctx->pc = 0x2D9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9FF0u, 0x2D9B58u, 0x2D9B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B60u;
label_2d9b60:
    // 0x2d9b60: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9b64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d9b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9b68: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D9B68u;
    SET_GPR_U32(ctx, 31, 0x2D9B70u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D9B68u, 0x2D9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B70u;
label_2d9b70:
    // 0x2d9b70: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2d9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d9b74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d9b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9b78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D9B78u;
    SET_GPR_U32(ctx, 31, 0x2D9B80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D9B78u, 0x2D9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B80u;
label_2d9b80:
    // 0x2d9b80: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2d9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2d9b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d9b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9b88: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2D9B88u;
    SET_GPR_U32(ctx, 31, 0x2D9B90u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2D9B88u, 0x2D9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B90u;
label_2d9b90:
    // 0x2d9b90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9B90u;
    {
        const bool branch_taken_0x2d9b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b90) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D9B98u;
label_2d9b98:
    // 0x2d9b98: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d9b9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9ba0: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D9BA0u;
    SET_GPR_U32(ctx, 31, 0x2D9BA8u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D9BA0u, 0x2D9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BA8u;
label_2d9ba8:
    // 0x2d9ba8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d9ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d9bac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d9bacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9bb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d9bb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9bb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d9bb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9bb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9bbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9bc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9bc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9bd0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2d9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d9bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9BDCu;
    // 0x2d9bdc: 0x0  nop
    ctx->pc = 0x2d9bdcu;
    // NOP
    ctx->pc = 0x2d9be0u;
}
