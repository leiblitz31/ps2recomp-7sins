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

// Function: sub_004ED520
// Address: 0x4ed520 - 0x4ed540
void sub_004ED520_0x4ed520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED520_0x4ed520");
#endif

    ctx->pc = 0x4ed520u;

    // 0x4ed520: 0x755c7325  .word       0x755C7325                   # INVALID     $t2, $gp, 0x7325 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed520u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED520 raw=0x755C7325");
    // 0x4ed524: 0x696e6176  ldl         $t6, 0x6176($t3)
    ctx->pc = 0x4ed524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4ed528: 0x255c736d  addiu       $gp, $t2, 0x736D
    ctx->pc = 0x4ed528u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 10), 29549));
    // 0x4ed52c: 0x76752e73  .word       0x76752E73                   # INVALID     $s3, $s5, 0x2E73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed52cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED52C raw=0x76752E73");
    // 0x4ed530: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed530u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4ed534: 0x0  nop
    ctx->pc = 0x4ed534u;
    // NOP
    // 0x4ed538: 0x0  nop
    ctx->pc = 0x4ed538u;
    // NOP
    // 0x4ed53c: 0x0  nop
    ctx->pc = 0x4ed53cu;
    // NOP
    ctx->pc = 0x4ed540u;
}
