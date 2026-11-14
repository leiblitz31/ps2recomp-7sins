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

// Function: sub_004E3268
// Address: 0x4e3268 - 0x4e3280
void sub_004E3268_0x4e3268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3268_0x4e3268");
#endif

    ctx->pc = 0x4e3268u;

    // 0x4e3268: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e326c: 0x656c625f  daddiu      $t4, $t3, 0x625F
    ctx->pc = 0x4e326cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25183);
    // 0x4e3270: 0x65665f75  daddiu      $a2, $t3, 0x5F75
    ctx->pc = 0x4e3270u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24437);
    // 0x4e3274: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e3278: 0x0  nop
    ctx->pc = 0x4e3278u;
    // NOP
    // 0x4e327c: 0x0  nop
    ctx->pc = 0x4e327cu;
    // NOP
    ctx->pc = 0x4e3280u;
}
