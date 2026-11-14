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

// Function: sub_004E3358
// Address: 0x4e3358 - 0x4e3390
void sub_004E3358_0x4e3358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3358_0x4e3358");
#endif

    ctx->pc = 0x4e3358u;

    // 0x4e3358: 0x732e6169  .word       0x732E6169                   # INVALID     $t9, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e3358u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4E3358 raw=0x732E6169");
    // 0x4e335c: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4e335cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e3360: 0x0  nop
    ctx->pc = 0x4e3360u;
    // NOP
    // 0x4e3364: 0x0  nop
    ctx->pc = 0x4e3364u;
    // NOP
    // 0x4e3368: 0x0  nop
    ctx->pc = 0x4e3368u;
    // NOP
    // 0x4e336c: 0x0  nop
    ctx->pc = 0x4e336cu;
    // NOP
    // 0x4e3370: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3370u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e3374: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3374u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e3378: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3378u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e337c: 0x3e800000  .word       0x3E800000                   # lui         $zero, 0x0 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e337cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e3380: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3380u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e3384: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3384u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e3388: 0x0  nop
    ctx->pc = 0x4e3388u;
    // NOP
    // 0x4e338c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e338cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x4e3390u;
}
