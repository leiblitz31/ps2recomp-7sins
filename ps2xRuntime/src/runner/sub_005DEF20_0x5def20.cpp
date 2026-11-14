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

// Function: sub_005DEF20
// Address: 0x5def20 - 0x5def60
void sub_005DEF20_0x5def20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEF20_0x5def20");
#endif

    switch (ctx->pc) {
        case 0x5def54u: goto label_5def54;
        default: break;
    }

    ctx->pc = 0x5def20u;

    // 0x5def20: 0x74735f28  .word       0x74735F28                   # INVALID     $v1, $s3, 0x5F28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def20u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEF20 raw=0x74735F28");
    // 0x5def24: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5def24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5def28: 0x30203d3e  andi        $zero, $at, 0x3D3E
    ctx->pc = 0x5def28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15678);
    // 0x5def2c: 0x26262029  addiu       $a2, $s1, 0x2029
    ctx->pc = 0x5def2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8233));
    // 0x5def30: 0x735f2820  madd1       $a1, $k0, $ra
    ctx->pc = 0x5def30u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 26) * (int64_t)GPR_S32(ctx, 31); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x5def34: 0x65746174  daddiu      $s4, $t3, 0x6174
    ctx->pc = 0x5def34u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
    // 0x5def38: 0x44203c20  .word       0x44203C20                   # dmfc1       $zero, $f7 # 00000420 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5def38u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x20 at 0x5DEF38 raw=0x44203C20");
    // 0x5def3c: 0x454d4354  .word       0x454D4354                   # INVALID     $t2, $t5, 0x4354 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5def3cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x5DEF3C raw=0x454D4354");
    // 0x5def40: 0x5241434d  beql        $s2, $at, . + 4 + (0x434D << 2)
    ctx->pc = 0x5DEF40u;
    {
        const bool branch_taken_0x5def40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x5def40) {
            ctx->pc = 0x5DEF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEF40u;
            // 0x5def44: 0x41545344  .word       0x41545344                   # INVALID     $t2, $s4, 0x5344 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DEF44 raw=0x41545344");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EFC78u;
            return;
        }
    }
    ctx->pc = 0x5DEF48u;
    // 0x5def48: 0x4e5f4554  .word       0x4E5F4554                   # INVALID     $s2, $ra, 0x4554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def48u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEF48 raw=0x4E5F4554");
    // 0x5def4c: 0x535f4d55  beql        $k0, $ra, . + 4 + (0x4D55 << 2)
    ctx->pc = 0x5DEF4Cu;
    {
        const bool branch_taken_0x5def4c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x5def4c) {
            ctx->pc = 0x5DEF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEF4Cu;
            // 0x5def50: 0x45544154  .word       0x45544154                   # INVALID     $t2, $s4, 0x4154 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x5DEF50 raw=0x45544154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F24A4u;
            return;
        }
    }
    ctx->pc = 0x5DEF54u;
label_5def54:
    // 0x5def54: 0x2953  .word       0x00002953                   # mtlo        $zero # 00002940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5def54u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x5def58: 0x0  nop
    ctx->pc = 0x5def58u;
    // NOP
    // 0x5def5c: 0x0  nop
    ctx->pc = 0x5def5cu;
    // NOP
    ctx->pc = 0x5def60u;
}
