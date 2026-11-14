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

// Function: sub_001B80D0
// Address: 0x1b80d0 - 0x1b81e0
void sub_001B80D0_0x1b80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B80D0_0x1b80d0");
#endif

    switch (ctx->pc) {
        case 0x1b8104u: goto label_1b8104;
        case 0x1b8118u: goto label_1b8118;
        case 0x1b813cu: goto label_1b813c;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b8170u: goto label_1b8170;
        case 0x1b8198u: goto label_1b8198;
        case 0x1b81a8u: goto label_1b81a8;
        case 0x1b81c4u: goto label_1b81c4;
        default: break;
    }

    ctx->pc = 0x1b80d0u;

    // 0x1b80d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b80d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b80d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b80d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b80dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b80dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b80e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b80e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b80e8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b80ec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1b80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1b80f0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1b80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1b80f4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1b80f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1b80f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b80fc: 0xc06cf54  jal         func_1B3D50
    ctx->pc = 0x1B80FCu;
    SET_GPR_U32(ctx, 31, 0x1B8104u);
    ctx->pc = 0x1B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D50u, 0x1B80FCu, 0x1B8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8104u;
label_1b8104:
    // 0x1b8104: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1b8104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1b8108: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1b8108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b810c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8110: 0xc041954  jal         func_106550
    ctx->pc = 0x1B8110u;
    SET_GPR_U32(ctx, 31, 0x1B8118u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1B8110u, 0x1B8118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8118u;
label_1b8118:
    // 0x1b8118: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b811c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8120: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1b8120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8124: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8128: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1b8128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b812c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b812cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8134: 0xc06e34c  jal         func_1B8D30
    ctx->pc = 0x1B8134u;
    SET_GPR_U32(ctx, 31, 0x1B813Cu);
    ctx->pc = 0x1B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8D30u, 0x1B8134u, 0x1B813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B813Cu;
label_1b813c:
    // 0x1b813c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8140: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8144: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b8144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8148: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1b8148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b814c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b814cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8150: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1B8150u;
    SET_GPR_U32(ctx, 31, 0x1B8158u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1B8150u, 0x1B8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8158u;
label_1b8158:
    // 0x1b8158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b815c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8160: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8164: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1b8164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8168: 0xc06e0ac  jal         func_1B82B0
    ctx->pc = 0x1B8168u;
    SET_GPR_U32(ctx, 31, 0x1B8170u);
    ctx->pc = 0x1B82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B82B0u, 0x1B8168u, 0x1B8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8170u;
label_1b8170:
    // 0x1b8170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8174: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1b8174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b8178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8178u;
    {
        const bool branch_taken_0x1b8178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8178) {
            ctx->pc = 0x1B819Cu;
            goto label_1b819c;
        }
    }
    ctx->pc = 0x1B8180u;
    // 0x1b8180: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8184: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8188: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b818c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8190: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1B8190u;
    SET_GPR_U32(ctx, 31, 0x1B8198u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1B8190u, 0x1B8198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8198u;
label_1b8198:
    // 0x1b8198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b819c:
    // 0x1b819c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b81a0: 0xc06e08c  jal         func_1B8230
    ctx->pc = 0x1B81A0u;
    SET_GPR_U32(ctx, 31, 0x1B81A8u);
    ctx->pc = 0x1B8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8230u, 0x1B81A0u, 0x1B81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81A8u;
label_1b81a8:
    // 0x1b81a8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b81ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b81b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b81b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b81b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81bc: 0xc06e078  jal         func_1B81E0
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81E0u, 0x1B81BCu, 0x1B81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C4u;
label_1b81c4:
    // 0x1b81c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b81c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b81c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b81c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b81cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b81ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b81d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b81d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b81d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1b81d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b81d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B81D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B81D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B81E0u;
}
