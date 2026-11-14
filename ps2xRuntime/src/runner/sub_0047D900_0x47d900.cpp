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

// Function: sub_0047D900
// Address: 0x47d900 - 0x47d9e0
void sub_0047D900_0x47d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D900_0x47d900");
#endif

    ctx->pc = 0x47d900u;

    // 0x47d900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x47d904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47d908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47d90c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47d910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47d914: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x47d914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x47d918: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x47d918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x47d91c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x47d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x47d920: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x47d920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x47d924: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x47d924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x47d928: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x47d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47d92c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d930: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x47d930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47d934: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47d938: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x47d938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47d93c: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x47d93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x47d940: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d944: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x47d944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x47d948: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x47d948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x47d94c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x47d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47d950: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47d958: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47d958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47d95c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47D95Cu;
    {
        const bool branch_taken_0x47d95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d95c) {
            ctx->pc = 0x47D974u;
            goto label_47d974;
        }
    }
    ctx->pc = 0x47D964u;
    // 0x47d964: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d968: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x47d968u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47d96c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d970: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x47d970u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47d974:
    // 0x47d974: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x47d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x47d978: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47d97c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x47d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d980: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x47d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x47d984: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47d988: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x47d988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d98c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x47d98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x47d990: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47d994: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x47d994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d998: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x47d998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x47d99c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47d9a0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x47d9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d9a4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x47d9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x47d9a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47d9ac: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x47d9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d9b0: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x47d9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x47d9b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47d9b8: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x47d9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x47d9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d9c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47d9c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47d9c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47d9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47d9c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47d9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47d9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d9d0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x47d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x47d9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x47D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D9DCu;
    // 0x47d9dc: 0x0  nop
    ctx->pc = 0x47d9dcu;
    // NOP
    ctx->pc = 0x47d9e0u;
}
