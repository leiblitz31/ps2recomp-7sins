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

// Function: sub_00253D70
// Address: 0x253d70 - 0x253f10
void sub_00253D70_0x253d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253D70_0x253d70");
#endif

    ctx->pc = 0x253d70u;

    // 0x253d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x253d7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x253d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x253d80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x253d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x253d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253d88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253d90: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x253D90u;
    {
        const bool branch_taken_0x253d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253d90) {
            ctx->pc = 0x253EACu;
            goto label_253eac;
        }
    }
    ctx->pc = 0x253D98u;
    // 0x253d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253d9c: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x253D9Cu;
    {
        const bool branch_taken_0x253d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253d9c) {
            ctx->pc = 0x253E54u;
            goto label_253e54;
        }
    }
    ctx->pc = 0x253DA4u;
    // 0x253da4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x253da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253da8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x253DA8u;
    {
        const bool branch_taken_0x253da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253da8) {
            ctx->pc = 0x253DF8u;
            goto label_253df8;
        }
    }
    ctx->pc = 0x253DB0u;
    // 0x253db0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253DB0u;
    {
        const bool branch_taken_0x253db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253db0) {
            ctx->pc = 0x253DC0u;
            goto label_253dc0;
        }
    }
    ctx->pc = 0x253DB8u;
    // 0x253db8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x253DB8u;
    {
        const bool branch_taken_0x253db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253db8) {
            ctx->pc = 0x253EF4u;
            goto label_253ef4;
        }
    }
    ctx->pc = 0x253DC0u;
label_253dc0:
    // 0x253dc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253dc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x253dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253dc8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253dcc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x253dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x253dd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253dd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253dd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253ddc: 0x628006  srlv        $s0, $v0, $v1
    ctx->pc = 0x253ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x253de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253de4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x253de8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x253de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x253dec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x253decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x253df0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x253DF0u;
    {
        const bool branch_taken_0x253df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253df0) {
            ctx->pc = 0x253EF8u;
            goto label_253ef8;
        }
    }
    ctx->pc = 0x253DF8u;
label_253df8:
    // 0x253df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253dfc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x253dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253e00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x253e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253e04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x253e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253e08: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x253e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253e0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253e10: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x253e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x253e14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e18: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253e1c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x253e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x253e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253e28: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253e2c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x253e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x253e30: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x253e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253e34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253e38: 0x628006  srlv        $s0, $v0, $v1
    ctx->pc = 0x253e38u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x253e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e40: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x253e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x253e44: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x253e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x253e48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x253e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x253e4c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x253E4Cu;
    {
        const bool branch_taken_0x253e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253e4c) {
            ctx->pc = 0x253EF8u;
            goto label_253ef8;
        }
    }
    ctx->pc = 0x253E54u;
label_253e54:
    // 0x253e54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e58: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x253e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253e5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253e60: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x253e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253e64: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x253e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e6c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253e70: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x253e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253e74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e78: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x253e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253e7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253e80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x253e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253e84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x253e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253e88: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253e8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253e90: 0x628006  srlv        $s0, $v0, $v1
    ctx->pc = 0x253e90u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x253e94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e98: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x253e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x253e9c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x253e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x253ea0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x253ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x253ea4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x253EA4u;
    {
        const bool branch_taken_0x253ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ea4) {
            ctx->pc = 0x253EF8u;
            goto label_253ef8;
        }
    }
    ctx->pc = 0x253EACu;
label_253eac:
    // 0x253eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253eb0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x253eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253eb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253eb8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x253eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253ebc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253ec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ec4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253ec8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x253ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x253ecc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x253eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253ed0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x253ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253ed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253ed8: 0x628006  srlv        $s0, $v0, $v1
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x253edc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ee0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x253ee4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x253ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x253ee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x253ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x253eec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253EECu;
    {
        const bool branch_taken_0x253eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253eec) {
            ctx->pc = 0x253EF8u;
            goto label_253ef8;
        }
    }
    ctx->pc = 0x253EF4u;
label_253ef4:
    // 0x253ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253ef8:
    // 0x253ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253efc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253f00: 0x3e00008  jr          $ra
    ctx->pc = 0x253F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F08u;
    // 0x253f08: 0x0  nop
    ctx->pc = 0x253f08u;
    // NOP
    // 0x253f0c: 0x0  nop
    ctx->pc = 0x253f0cu;
    // NOP
    ctx->pc = 0x253f10u;
}
