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

// Function: sub_004E2EB8
// Address: 0x4e2eb8 - 0x4e2ec8
void sub_004E2EB8_0x4e2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2EB8_0x4e2eb8");
#endif

    ctx->pc = 0x4e2eb8u;

    // 0x4e2eb8: 0x6e656c62  ldr         $a1, 0x6C62($s3)
    ctx->pc = 0x4e2eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e2ebc: 0x646f6d64  daddiu      $t7, $v1, 0x6D64
    ctx->pc = 0x4e2ebcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28004);
    // 0x4e2ec0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2ec0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e2ec4: 0x0  nop
    ctx->pc = 0x4e2ec4u;
    // NOP
    ctx->pc = 0x4e2ec8u;
}
