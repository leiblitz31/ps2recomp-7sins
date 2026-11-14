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

// Function: sub_005DEEF0
// Address: 0x5deef0 - 0x5def20
void sub_005DEEF0_0x5deef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEEF0_0x5deef0");
#endif

    switch (ctx->pc) {
        case 0x5deef8u: goto label_5deef8;
        case 0x5def14u: goto label_5def14;
        default: break;
    }

    ctx->pc = 0x5deef0u;

    // 0x5deef0: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deef0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEEF0 raw=0x4D637464");
    // 0x5deef4: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deef4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DEEF4 raw=0x726F6D65");
label_5deef8:
    // 0x5deef8: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deef8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x5DEEF8 raw=0x72614379");
    // 0x5deefc: 0x433a3a64  .word       0x433A3A64                   # INVALID     $t9, $k0, 0x3A64 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deefcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5DEEFC raw=0x433A3A64");
    // 0x5def00: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def00u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEF00 raw=0x74616572");
    // 0x5def04: 0x74614465  .word       0x74614465                   # INVALID     $v1, $at, 0x4465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def04u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEF04 raw=0x74614465");
    // 0x5def08: 0x6c694661  ldr         $t1, 0x4661($v1)
    ctx->pc = 0x5def08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18017); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5def0c: 0x6d614e65  ldr         $at, 0x4E65($t3)
    ctx->pc = 0x5def0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20069); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5def10: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5def10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5def14:
    // 0x5def14: 0x0  nop
    ctx->pc = 0x5def14u;
    // NOP
    // 0x5def18: 0x0  nop
    ctx->pc = 0x5def18u;
    // NOP
    // 0x5def1c: 0x0  nop
    ctx->pc = 0x5def1cu;
    // NOP
    ctx->pc = 0x5def20u;
}
