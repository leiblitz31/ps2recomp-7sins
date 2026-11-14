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

// Function: sub_004EC500
// Address: 0x4ec500 - 0x4ec520
void sub_004EC500_0x4ec500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC500_0x4ec500");
#endif

    ctx->pc = 0x4ec500u;

    // 0x4ec500: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec500u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC500 raw=0x736E6573");
    // 0x4ec504: 0x6c696269  ldr         $t1, 0x6269($v1)
    ctx->pc = 0x4ec504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25193); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec508: 0x2e797469  sltiu       $t9, $s3, 0x7469
    ctx->pc = 0x4ec508u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
    // 0x4ec50c: 0x65697266  daddiu      $t1, $t3, 0x7266
    ctx->pc = 0x4ec50cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29286);
    // 0x4ec510: 0x6873646e  ldl         $s3, 0x646E($v1)
    ctx->pc = 0x4ec510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25710); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4ec514: 0x7069  .word       0x00007069                   # mtsa        $zero # 00007040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec514u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x4ec518: 0x0  nop
    ctx->pc = 0x4ec518u;
    // NOP
    // 0x4ec51c: 0x0  nop
    ctx->pc = 0x4ec51cu;
    // NOP
    ctx->pc = 0x4ec520u;
}
