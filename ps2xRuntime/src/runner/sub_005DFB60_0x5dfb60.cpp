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

// Function: sub_005DFB60
// Address: 0x5dfb60 - 0x5dfb90
void sub_005DFB60_0x5dfb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFB60_0x5dfb60");
#endif

    switch (ctx->pc) {
        case 0x5dfb64u: goto label_5dfb64;
        case 0x5dfb78u: goto label_5dfb78;
        default: break;
    }

    ctx->pc = 0x5dfb60u;

    // 0x5dfb60: 0x62616e55  daddi       $at, $s3, 0x6E55
    ctx->pc = 0x5dfb60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28245; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5dfb64:
    // 0x5dfb64: 0x7420656c  .word       0x7420656C                   # INVALID     $at, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfb64u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFB64 raw=0x7420656C");
    // 0x5dfb68: 0x6e69206f  ldr         $t1, 0x206F($s3)
    ctx->pc = 0x5dfb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfb6c: 0x64756c63  daddiu      $s5, $v1, 0x6C63
    ctx->pc = 0x5dfb6cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27747);
    // 0x5dfb70: 0x69662065  ldl         $a2, 0x2065($t3)
    ctx->pc = 0x5dfb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5dfb74: 0x2720656c  addiu       $zero, $t9, 0x656C
    ctx->pc = 0x5dfb74u;
    // NOP (addiu $zero, ...)
label_5dfb78:
    // 0x5dfb78: 0x2c277325  sltiu       $a3, $at, 0x7325
    ctx->pc = 0x5dfb78u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)29477) ? 1 : 0);
    // 0x5dfb7c: 0x63696620  daddi       $t1, $k1, 0x6620
    ctx->pc = 0x5dfb7cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26144; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5dfb80: 0x29732528  slti        $s3, $t3, 0x2528
    ctx->pc = 0x5dfb80u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9512) ? 1 : 0);
    // 0x5dfb84: 0x6e696c20  ldr         $t1, 0x6C20($s3)
    ctx->pc = 0x5dfb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfb88: 0x64252865  daddiu      $a1, $at, 0x2865
    ctx->pc = 0x5dfb88u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)10341);
    // 0x5dfb8c: 0x29  mtsa        $zero
    ctx->pc = 0x5dfb8cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    ctx->pc = 0x5dfb90u;
}
