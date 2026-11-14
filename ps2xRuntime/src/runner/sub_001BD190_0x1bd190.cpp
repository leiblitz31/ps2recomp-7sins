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

// Function: sub_001BD190
// Address: 0x1bd190 - 0x1bd2a0
void sub_001BD190_0x1bd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD190_0x1bd190");
#endif

    switch (ctx->pc) {
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1d8u: goto label_1bd1d8;
        case 0x1bd1fcu: goto label_1bd1fc;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd230u: goto label_1bd230;
        case 0x1bd258u: goto label_1bd258;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd284u: goto label_1bd284;
        default: break;
    }

    ctx->pc = 0x1bd190u;

    // 0x1bd190: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bd190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bd194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bd198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd1a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd1a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1bd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1bd1a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1bd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1bd1ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1bd1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1bd1b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1bd1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1bd1b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1bd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1bd1b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd1bc: 0xc06f428  jal         func_1BD0A0
    ctx->pc = 0x1BD1BCu;
    SET_GPR_U32(ctx, 31, 0x1BD1C4u);
    ctx->pc = 0x1BD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0A0u, 0x1BD1BCu, 0x1BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1bd1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1bd1c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bd1cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bd1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bd1d0: 0xc041954  jal         func_106550
    ctx->pc = 0x1BD1D0u;
    SET_GPR_U32(ctx, 31, 0x1BD1D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1BD1D0u, 0x1BD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1D8u;
label_1bd1d8:
    // 0x1bd1d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1bd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bd1dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd1e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd1e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1bd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bd1ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1f4: 0xc070db4  jal         func_1C36D0
    ctx->pc = 0x1BD1F4u;
    SET_GPR_U32(ctx, 31, 0x1BD1FCu);
    ctx->pc = 0x1C36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C36D0u, 0x1BD1F4u, 0x1BD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1FCu;
label_1bd1fc:
    // 0x1bd1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd200: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd204: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bd204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd208: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1bd208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd20c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd210: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1BD210u;
    SET_GPR_U32(ctx, 31, 0x1BD218u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1BD210u, 0x1BD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD218u;
label_1bd218:
    // 0x1bd218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd220: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd224: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1bd224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd228: 0xc06f4dc  jal         func_1BD370
    ctx->pc = 0x1BD228u;
    SET_GPR_U32(ctx, 31, 0x1BD230u);
    ctx->pc = 0x1BD370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD370u, 0x1BD228u, 0x1BD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD230u;
label_1bd230:
    // 0x1bd230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd234: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1bd234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd238: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD238u;
    {
        const bool branch_taken_0x1bd238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd238) {
            ctx->pc = 0x1BD25Cu;
            goto label_1bd25c;
        }
    }
    ctx->pc = 0x1BD240u;
    // 0x1bd240: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd244: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd248: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd24c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bd24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd250: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1BD250u;
    SET_GPR_U32(ctx, 31, 0x1BD258u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1BD250u, 0x1BD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD258u;
label_1bd258:
    // 0x1bd258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd25c:
    // 0x1bd25c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd260: 0xc06f4bc  jal         func_1BD2F0
    ctx->pc = 0x1BD260u;
    SET_GPR_U32(ctx, 31, 0x1BD268u);
    ctx->pc = 0x1BD2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD2F0u, 0x1BD260u, 0x1BD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD268u;
label_1bd268:
    // 0x1bd268: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bd26c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bd270: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bd278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd27c: 0xc06f4a8  jal         func_1BD2A0
    ctx->pc = 0x1BD27Cu;
    SET_GPR_U32(ctx, 31, 0x1BD284u);
    ctx->pc = 0x1BD2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD2A0u, 0x1BD27Cu, 0x1BD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD284u;
label_1bd284:
    // 0x1bd284: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bd284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd28c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd294: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bd298: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD2A0u;
}
