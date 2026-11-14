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

// Function: sub_005DFCA0
// Address: 0x5dfca0 - 0x5dfcd0
void sub_005DFCA0_0x5dfca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFCA0_0x5dfca0");
#endif

    ctx->pc = 0x5dfca0u;

    // 0x5dfca0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFCA0u;
    {
        const bool branch_taken_0x5dfca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfca0) {
            ctx->pc = 0x5DFCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFCA0u;
            // 0x5dfca4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCE34u;
            return;
        }
    }
    ctx->pc = 0x5DFCA8u;
    // 0x5dfca8: 0x6774643a  daddiu      $s4, $k1, 0x643A
    ctx->pc = 0x5dfca8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25658);
    // 0x5dfcac: 0x73757242  .word       0x73757242                   # INVALID     $k1, $s5, 0x7242 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfcacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5dfcb0: 0x20643268  addi        $a0, $v1, 0x3268
    ctx->pc = 0x5dfcb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)12904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5dfcb4: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5dfcb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5dfcb8: 0x64327452  daddiu      $s2, $at, 0x7452
    ctx->pc = 0x5dfcb8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29778);
    // 0x5dfcbc: 0x73757242  .word       0x73757242                   # INVALID     $k1, $s5, 0x7242 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfcbcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5dfcc0: 0x65724368  daddiu      $s2, $t3, 0x4368
    ctx->pc = 0x5dfcc0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17256);
    // 0x5dfcc4: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5dfcc4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dfcc8: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5dfcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfccc: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfcccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    ctx->pc = 0x5dfcd0u;
}
