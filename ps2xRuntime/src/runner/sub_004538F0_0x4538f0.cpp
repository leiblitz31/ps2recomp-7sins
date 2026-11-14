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

// Function: sub_004538F0
// Address: 0x4538f0 - 0x453a00
void sub_004538F0_0x4538f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004538F0_0x4538f0");
#endif

    switch (ctx->pc) {
        case 0x453924u: goto label_453924;
        case 0x453938u: goto label_453938;
        case 0x45395cu: goto label_45395c;
        case 0x453978u: goto label_453978;
        case 0x453990u: goto label_453990;
        case 0x4539b8u: goto label_4539b8;
        case 0x4539c8u: goto label_4539c8;
        case 0x4539e4u: goto label_4539e4;
        default: break;
    }

    ctx->pc = 0x4538f0u;

    // 0x4538f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4538f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4538f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4538f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4538f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4538f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4538fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4538fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x453900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x453904: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x453904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x453908: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x453908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x45390c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x45390cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x453910: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x453910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x453914: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x453914u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x453918: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x453918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45391c: 0xc114a58  jal         func_452960
    ctx->pc = 0x45391Cu;
    SET_GPR_U32(ctx, 31, 0x453924u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x45391Cu, 0x453924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453924u;
label_453924:
    // 0x453924: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x453924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x453928: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x453928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x45392c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x45392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x453930: 0xc041954  jal         func_106550
    ctx->pc = 0x453930u;
    SET_GPR_U32(ctx, 31, 0x453938u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x453930u, 0x453938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453938u;
label_453938:
    // 0x453938: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x453938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x45393c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453940: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x453940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x453944: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x453944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x453948: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x453948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x45394c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x453950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453954: 0xc1157c4  jal         func_455F10
    ctx->pc = 0x453954u;
    SET_GPR_U32(ctx, 31, 0x45395Cu);
    ctx->pc = 0x455F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455F10u, 0x453954u, 0x45395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45395Cu;
label_45395c:
    // 0x45395c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45395cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453960: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x453960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x453964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x453964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453968: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x453968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45396c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45396cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453970: 0xc041934  jal         func_1064D0
    ctx->pc = 0x453970u;
    SET_GPR_U32(ctx, 31, 0x453978u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x453970u, 0x453978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453978u;
label_453978:
    // 0x453978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453980: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x453980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x453984: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x453984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x453988: 0xc114eb4  jal         func_453AD0
    ctx->pc = 0x453988u;
    SET_GPR_U32(ctx, 31, 0x453990u);
    ctx->pc = 0x453AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453AD0u, 0x453988u, 0x453990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453990u;
label_453990:
    // 0x453990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453994: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x453994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x453998: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x453998u;
    {
        const bool branch_taken_0x453998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453998) {
            ctx->pc = 0x4539BCu;
            goto label_4539bc;
        }
    }
    ctx->pc = 0x4539A0u;
    // 0x4539a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4539a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4539a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4539a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4539a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4539a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4539ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4539acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x4539B0u;
    SET_GPR_U32(ctx, 31, 0x4539B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x4539B0u, 0x4539B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539B8u;
label_4539b8:
    // 0x4539b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4539b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4539bc:
    // 0x4539bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4539bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4539c0: 0xc114e94  jal         func_453A50
    ctx->pc = 0x4539C0u;
    SET_GPR_U32(ctx, 31, 0x4539C8u);
    ctx->pc = 0x453A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453A50u, 0x4539C0u, 0x4539C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539C8u;
label_4539c8:
    // 0x4539c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4539c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4539cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x4539ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4539d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4539d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4539d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4539d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4539d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539dc: 0xc114e80  jal         func_453A00
    ctx->pc = 0x4539DCu;
    SET_GPR_U32(ctx, 31, 0x4539E4u);
    ctx->pc = 0x453A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453A00u, 0x4539DCu, 0x4539E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539E4u;
label_4539e4:
    // 0x4539e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4539e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4539e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4539e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4539ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4539ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4539f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4539f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4539f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4539f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4539f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4539F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4539F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453A00u;
}
