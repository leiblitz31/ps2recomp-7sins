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

// Function: sub_001718F0
// Address: 0x1718f0 - 0x171a00
void sub_001718F0_0x1718f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001718F0_0x1718f0");
#endif

    switch (ctx->pc) {
        case 0x17192cu: goto label_17192c;
        case 0x17193cu: goto label_17193c;
        case 0x171968u: goto label_171968;
        case 0x1719a4u: goto label_1719a4;
        case 0x1719c8u: goto label_1719c8;
        default: break;
    }

    ctx->pc = 0x1718f0u;

    // 0x1718f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1718f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1718f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1718f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1718f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1718f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1718fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1718fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171904: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x171904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x171908: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x171908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x17190c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x17190cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x171910: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171918: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x171918u;
    {
        const bool branch_taken_0x171918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171918) {
            ctx->pc = 0x1719D8u;
            goto label_1719d8;
        }
    }
    ctx->pc = 0x171920u;
    // 0x171920: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x171920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171924: 0xc042514  jal         func_109450
    ctx->pc = 0x171924u;
    SET_GPR_U32(ctx, 31, 0x17192Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x171924u, 0x17192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17192Cu;
label_17192c:
    // 0x17192c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17192cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171930: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x171930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171934: 0xc042514  jal         func_109450
    ctx->pc = 0x171934u;
    SET_GPR_U32(ctx, 31, 0x17193Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x171934u, 0x17193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17193Cu;
label_17193c:
    // 0x17193c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17193cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171940: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171944: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x171944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x171948: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x171948u;
    {
        const bool branch_taken_0x171948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171948) {
            ctx->pc = 0x171954u;
            goto label_171954;
        }
    }
    ctx->pc = 0x171950u;
    // 0x171950: 0xafb10060  sw          $s1, 0x60($sp)
    ctx->pc = 0x171950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 17));
label_171954:
    // 0x171954: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x171958: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17195c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171960: 0xc119354  jal         func_464D50
    ctx->pc = 0x171960u;
    SET_GPR_U32(ctx, 31, 0x171968u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x171960u, 0x171968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171968u;
label_171968:
    // 0x171968: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x171968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17196c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x171970: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x171974: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x171974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17197c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171980: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171984: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x171984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x171988: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x171988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17198c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171990: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171994: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x171994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171998: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x171998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17199c: 0xc0bb7a4  jal         func_2EDE90
    ctx->pc = 0x17199Cu;
    SET_GPR_U32(ctx, 31, 0x1719A4u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x17199Cu, 0x1719A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719A4u;
label_1719a4:
    // 0x1719a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1719a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1719a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1719ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1719acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1719b0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1719b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1719b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1719b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1719bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719c0: 0xc1192d4  jal         func_464B50
    ctx->pc = 0x1719C0u;
    SET_GPR_U32(ctx, 31, 0x1719C8u);
    ctx->pc = 0x464B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464B50u, 0x1719C0u, 0x1719C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719C8u;
label_1719c8:
    // 0x1719c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1719c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1719cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1719ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1719d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1719d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1719d4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1719d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1719d8:
    // 0x1719d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1719d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1719dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1719dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1719e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1719e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1719e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1719e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1719e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1719ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1719ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1719F4u;
    // 0x1719f4: 0x0  nop
    ctx->pc = 0x1719f4u;
    // NOP
    // 0x1719f8: 0x0  nop
    ctx->pc = 0x1719f8u;
    // NOP
    // 0x1719fc: 0x0  nop
    ctx->pc = 0x1719fcu;
    // NOP
    ctx->pc = 0x171a00u;
}
