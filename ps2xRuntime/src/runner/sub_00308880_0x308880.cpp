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

// Function: sub_00308880
// Address: 0x308880 - 0x308a10
void sub_00308880_0x308880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308880_0x308880");
#endif

    switch (ctx->pc) {
        case 0x3088c8u: goto label_3088c8;
        case 0x308930u: goto label_308930;
        case 0x30899cu: goto label_30899c;
        case 0x3089d0u: goto label_3089d0;
        default: break;
    }

    ctx->pc = 0x308880u;

    // 0x308880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308884: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308888: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30888c: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x30888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x308890: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x308890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x308894: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x308894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30889c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3088a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2244u));
    // 0x3088a4: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3088A4u;
    {
        const bool branch_taken_0x3088a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3088A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088A4u;
        // 0x3088a8: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088a4) {
            ctx->pc = 0x3089F8u;
            goto label_3089f8;
        }
    }
    ctx->pc = 0x3088ACu;
    // 0x3088ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3088b0: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x3088b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3088b4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3088b4u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3088b8: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3088B8u;
    {
        const bool branch_taken_0x3088b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3088b8) {
            ctx->pc = 0x3088BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3088B8u;
            // 0x3088bc: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3088ECu;
            goto label_3088ec;
        }
    }
    ctx->pc = 0x3088C0u;
    // 0x3088c0: 0xc0c2148  jal         func_308520
    ctx->pc = 0x3088C0u;
    SET_GPR_U32(ctx, 31, 0x3088C8u);
    ctx->pc = 0x3088C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088C0u;
    // 0x3088c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308520u, 0x3088C0u, 0x3088C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088C8u;
label_3088c8:
    // 0x3088c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3088cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3088ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3088d0: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3088d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3088d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3088d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3088d8: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3088d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3088dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3088dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3088e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3088e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3088e4: 0x80c2144  j           func_308510
    ctx->pc = 0x3088E4u;
    ctx->pc = 0x3088E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088E4u;
    // 0x3088e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    sub_00308510_0x308510(rdram, ctx, runtime); return;
    ctx->pc = 0x3088ECu;
label_3088ec:
    // 0x3088ec: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3088ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3088f0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3088f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3088f4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3088f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3088f8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3088f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3088fc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3088FCu;
    {
        const bool branch_taken_0x3088fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x308900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088FCu;
        // 0x308900: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088fc) {
            ctx->pc = 0x308964u;
            goto label_308964;
        }
    }
    ctx->pc = 0x308904u;
    // 0x308904: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x308904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x308908: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x308908u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x30890c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x30890cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x308910: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x308910u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x308914: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x308914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x308918: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x308918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x30891c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x30891cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x308920: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x308920u;
    {
        const bool branch_taken_0x308920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308920u;
        // 0x308924: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308920) {
            ctx->pc = 0x308964u;
            goto label_308964;
        }
    }
    ctx->pc = 0x308928u;
    // 0x308928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30892c: 0x0  nop
    ctx->pc = 0x30892cu;
    // NOP
label_308930:
    // 0x308930: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x308930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308934: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x308934u;
    {
        const bool branch_taken_0x308934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x308938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308934u;
        // 0x308938: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308934) {
            ctx->pc = 0x308968u;
            goto label_308968;
        }
    }
    ctx->pc = 0x30893Cu;
    // 0x30893c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x30893cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x308940: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x308940u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x308944: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x308944u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x308948: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x308948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x30894c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x30894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x308950: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x308950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x308954: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x308954u;
    {
        const bool branch_taken_0x308954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308954) {
            ctx->pc = 0x308958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308954u;
            // 0x308958: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30896Cu;
            goto label_30896c;
        }
    }
    ctx->pc = 0x30895Cu;
    // 0x30895c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x30895Cu;
    {
        const bool branch_taken_0x30895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30895Cu;
        // 0x308960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30895c) {
            ctx->pc = 0x308930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308930;
        }
    }
    ctx->pc = 0x308964u;
label_308964:
    // 0x308964: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x308964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_308968:
    // 0x308968: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x308968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_30896c:
    // 0x30896c: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x30896cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x308970: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x308970u;
    {
        const bool branch_taken_0x308970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308970u;
        // 0x308974: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308970) {
            ctx->pc = 0x3089C0u;
            goto label_3089c0;
        }
    }
    ctx->pc = 0x308978u;
    // 0x308978: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x308978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30897c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x308980: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x308980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x308984: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x308984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x308988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30898c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30898cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308990: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x308990u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x308994: 0xc0c2148  jal         func_308520
    ctx->pc = 0x308994u;
    SET_GPR_U32(ctx, 31, 0x30899Cu);
    ctx->pc = 0x308998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308994u;
    // 0x308998: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308520u, 0x308994u, 0x30899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30899Cu;
label_30899c:
    // 0x30899c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x30899cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3089a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3089a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3089a4: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3089a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3089a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3089a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3089ac: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3089acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3089b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3089b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3089b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3089b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3089b8: 0x80c2144  j           func_308510
    ctx->pc = 0x3089B8u;
    ctx->pc = 0x3089BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089B8u;
    // 0x3089bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    sub_00308510_0x308510(rdram, ctx, runtime); return;
    ctx->pc = 0x3089C0u;
label_3089c0:
    // 0x3089c0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3089c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3089c4: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3089c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3089c8: 0xc0c2144  jal         func_308510
    ctx->pc = 0x3089C8u;
    SET_GPR_U32(ctx, 31, 0x3089D0u);
    ctx->pc = 0x3089CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089C8u;
    // 0x3089cc: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x3089C8u, 0x3089D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089D0u;
label_3089d0:
    // 0x3089d0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3089d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3089d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3089d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3089d8: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x3089d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3089dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3089dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3089e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3089e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3089e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3089e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3089e8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3089e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3089ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3089ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3089f0: 0x80c2148  j           func_308520
    ctx->pc = 0x3089F0u;
    ctx->pc = 0x3089F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089F0u;
    // 0x3089f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308520u;
    sub_00308520_0x308520(rdram, ctx, runtime); return;
    ctx->pc = 0x3089F8u;
label_3089f8:
    // 0x3089f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3089f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3089fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3089fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a08: 0x3e00008  jr          $ra
    ctx->pc = 0x308A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A08u;
        // 0x308a0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A10u;
}
