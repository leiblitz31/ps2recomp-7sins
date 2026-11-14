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

// Function: sub_004E5220
// Address: 0x4e5220 - 0x4e5238
void sub_004E5220_0x4e5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5220_0x4e5220");
#endif

    ctx->pc = 0x4e5220u;

    // 0x4e5220: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5220u;
    {
        const bool branch_taken_0x4e5220 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5220) {
            ctx->pc = 0x4E5224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5220u;
            // 0x4e5224: 0x656d6167  daddiu      $t5, $t3, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5033F4u;
            return;
        }
    }
    ctx->pc = 0x4E5228u;
    // 0x4e5228: 0x6f5f6f69  ldr         $ra, 0x6F69($k0)
    ctx->pc = 0x4e5228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28521); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e522c: 0x70797470  .word       0x70797470                   # INVALID     $v1, $t9, 0x7470 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e522cu;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x11 at 0x4E522C raw=0x70797470");
    // 0x4e5230: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5230u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e5234: 0x0  nop
    ctx->pc = 0x4e5234u;
    // NOP
    ctx->pc = 0x4e5238u;
}
