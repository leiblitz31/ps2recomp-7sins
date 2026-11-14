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

// Function: sub_003820D8
// Address: 0x3820d8 - 0x382308
void sub_003820D8_0x3820d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003820D8_0x3820d8");
#endif

    switch (ctx->pc) {
        case 0x3820d8u: goto label_3820d8;
        case 0x3820dcu: goto label_3820dc;
        case 0x3820e0u: goto label_3820e0;
        case 0x3820e4u: goto label_3820e4;
        case 0x3820e8u: goto label_3820e8;
        case 0x3820ecu: goto label_3820ec;
        case 0x3820f0u: goto label_3820f0;
        case 0x3820f4u: goto label_3820f4;
        case 0x3820f8u: goto label_3820f8;
        case 0x3820fcu: goto label_3820fc;
        case 0x382100u: goto label_382100;
        case 0x382104u: goto label_382104;
        case 0x382108u: goto label_382108;
        case 0x38210cu: goto label_38210c;
        case 0x382110u: goto label_382110;
        case 0x382114u: goto label_382114;
        case 0x382118u: goto label_382118;
        case 0x38211cu: goto label_38211c;
        case 0x382120u: goto label_382120;
        case 0x382124u: goto label_382124;
        case 0x382128u: goto label_382128;
        case 0x38212cu: goto label_38212c;
        case 0x382130u: goto label_382130;
        case 0x382134u: goto label_382134;
        case 0x382138u: goto label_382138;
        case 0x38213cu: goto label_38213c;
        case 0x382140u: goto label_382140;
        case 0x382144u: goto label_382144;
        case 0x382148u: goto label_382148;
        case 0x38214cu: goto label_38214c;
        case 0x382150u: goto label_382150;
        case 0x382154u: goto label_382154;
        case 0x382158u: goto label_382158;
        case 0x38215cu: goto label_38215c;
        case 0x382160u: goto label_382160;
        case 0x382164u: goto label_382164;
        case 0x382168u: goto label_382168;
        case 0x38216cu: goto label_38216c;
        case 0x382170u: goto label_382170;
        case 0x382174u: goto label_382174;
        case 0x382178u: goto label_382178;
        case 0x38217cu: goto label_38217c;
        case 0x382180u: goto label_382180;
        case 0x382184u: goto label_382184;
        case 0x382188u: goto label_382188;
        case 0x38218cu: goto label_38218c;
        case 0x382190u: goto label_382190;
        case 0x382194u: goto label_382194;
        case 0x382198u: goto label_382198;
        case 0x38219cu: goto label_38219c;
        case 0x3821a0u: goto label_3821a0;
        case 0x3821a4u: goto label_3821a4;
        case 0x3821a8u: goto label_3821a8;
        case 0x3821acu: goto label_3821ac;
        case 0x3821b0u: goto label_3821b0;
        case 0x3821b4u: goto label_3821b4;
        case 0x3821b8u: goto label_3821b8;
        case 0x3821bcu: goto label_3821bc;
        case 0x3821c0u: goto label_3821c0;
        case 0x3821c4u: goto label_3821c4;
        case 0x3821c8u: goto label_3821c8;
        case 0x3821ccu: goto label_3821cc;
        case 0x3821d0u: goto label_3821d0;
        case 0x3821d4u: goto label_3821d4;
        case 0x3821d8u: goto label_3821d8;
        case 0x3821dcu: goto label_3821dc;
        case 0x3821e0u: goto label_3821e0;
        case 0x3821e4u: goto label_3821e4;
        case 0x3821e8u: goto label_3821e8;
        case 0x3821ecu: goto label_3821ec;
        case 0x3821f0u: goto label_3821f0;
        case 0x3821f4u: goto label_3821f4;
        case 0x3821f8u: goto label_3821f8;
        case 0x3821fcu: goto label_3821fc;
        case 0x382200u: goto label_382200;
        case 0x382204u: goto label_382204;
        case 0x382208u: goto label_382208;
        case 0x38220cu: goto label_38220c;
        case 0x382210u: goto label_382210;
        case 0x382214u: goto label_382214;
        case 0x382218u: goto label_382218;
        case 0x38221cu: goto label_38221c;
        case 0x382220u: goto label_382220;
        case 0x382224u: goto label_382224;
        case 0x382228u: goto label_382228;
        case 0x38222cu: goto label_38222c;
        case 0x382230u: goto label_382230;
        case 0x382234u: goto label_382234;
        case 0x382238u: goto label_382238;
        case 0x38223cu: goto label_38223c;
        case 0x382240u: goto label_382240;
        case 0x382244u: goto label_382244;
        case 0x382248u: goto label_382248;
        case 0x38224cu: goto label_38224c;
        case 0x382250u: goto label_382250;
        case 0x382254u: goto label_382254;
        case 0x382258u: goto label_382258;
        case 0x38225cu: goto label_38225c;
        case 0x382260u: goto label_382260;
        case 0x382264u: goto label_382264;
        case 0x382268u: goto label_382268;
        case 0x38226cu: goto label_38226c;
        case 0x382270u: goto label_382270;
        case 0x382274u: goto label_382274;
        case 0x382278u: goto label_382278;
        case 0x38227cu: goto label_38227c;
        case 0x382280u: goto label_382280;
        case 0x382284u: goto label_382284;
        case 0x382288u: goto label_382288;
        case 0x38228cu: goto label_38228c;
        case 0x382290u: goto label_382290;
        case 0x382294u: goto label_382294;
        case 0x382298u: goto label_382298;
        case 0x38229cu: goto label_38229c;
        case 0x3822a0u: goto label_3822a0;
        case 0x3822a4u: goto label_3822a4;
        case 0x3822a8u: goto label_3822a8;
        case 0x3822acu: goto label_3822ac;
        case 0x3822b0u: goto label_3822b0;
        case 0x3822b4u: goto label_3822b4;
        case 0x3822b8u: goto label_3822b8;
        case 0x3822bcu: goto label_3822bc;
        case 0x3822c0u: goto label_3822c0;
        case 0x3822c4u: goto label_3822c4;
        case 0x3822c8u: goto label_3822c8;
        case 0x3822ccu: goto label_3822cc;
        case 0x3822d0u: goto label_3822d0;
        case 0x3822d4u: goto label_3822d4;
        case 0x3822d8u: goto label_3822d8;
        case 0x3822dcu: goto label_3822dc;
        case 0x3822e0u: goto label_3822e0;
        case 0x3822e4u: goto label_3822e4;
        case 0x3822e8u: goto label_3822e8;
        case 0x3822ecu: goto label_3822ec;
        case 0x3822f0u: goto label_3822f0;
        case 0x3822f4u: goto label_3822f4;
        case 0x3822f8u: goto label_3822f8;
        case 0x3822fcu: goto label_3822fc;
        case 0x382300u: goto label_382300;
        case 0x382304u: goto label_382304;
        default: break;
    }

    ctx->pc = 0x3820d8u;

label_3820d8:
    // 0x3820d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3820d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3820dc:
    // 0x3820dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3820dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3820e0:
    // 0x3820e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3820e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3820e4:
    // 0x3820e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3820e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3820e8:
    // 0x3820e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3820e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3820ec:
    // 0x3820ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3820ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3820f0:
    // 0x3820f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3820f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3820f4:
    // 0x3820f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3820f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3820f8:
    // 0x3820f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3820f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3820fc:
    // 0x3820fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3820fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_382100:
    // 0x382100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_382104:
    // 0x382104: 0xc103468  jal         func_40D1A0
label_382108:
    if (ctx->pc == 0x382108u) {
        ctx->pc = 0x382108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382104u;
        // 0x382108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38210Cu;
        goto label_38210c;
    }
    ctx->pc = 0x382104u;
    SET_GPR_U32(ctx, 31, 0x38210Cu);
    ctx->pc = 0x382108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382104u;
    // 0x382108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x382104u, 0x38210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38210Cu;
label_38210c:
    // 0x38210c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_382110:
    if (ctx->pc == 0x382110u) {
        ctx->pc = 0x382110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38210Cu;
        // 0x382110: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382114u;
        goto label_382114;
    }
    ctx->pc = 0x38210Cu;
    {
        const bool branch_taken_0x38210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38210Cu;
        // 0x382110: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38210c) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x382114u;
label_382114:
    // 0x382114: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
label_382118:
    if (ctx->pc == 0x382118u) {
        ctx->pc = 0x382118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382114u;
        // 0x382118: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38211Cu;
        goto label_38211c;
    }
    ctx->pc = 0x382114u;
    {
        const bool branch_taken_0x382114 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x382118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382114u;
        // 0x382118: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382114) {
            ctx->pc = 0x38214Cu;
            goto label_38214c;
        }
    }
    ctx->pc = 0x38211Cu;
label_38211c:
    // 0x38211c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38211cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_382120:
    // 0x382120: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x382120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_382124:
    // 0x382124: 0x40f809  jalr        $v0
label_382128:
    if (ctx->pc == 0x382128u) {
        ctx->pc = 0x382128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382124u;
        // 0x382128: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38212Cu;
        goto label_38212c;
    }
    ctx->pc = 0x382124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38212Cu);
        ctx->pc = 0x382128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382124u;
        // 0x382128: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382124u, 0x38212Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38212Cu;
label_38212c:
    // 0x38212c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_382130:
    if (ctx->pc == 0x382130u) {
        ctx->pc = 0x382130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38212Cu;
        // 0x382130: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382134u;
        goto label_382134;
    }
    ctx->pc = 0x38212Cu;
    {
        const bool branch_taken_0x38212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38212Cu;
        // 0x382130: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38212c) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x382134u;
label_382134:
    // 0x382134: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x382134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_382138:
    // 0x382138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x382138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38213c:
    // 0x38213c: 0xc10480a  jal         func_412028
label_382140:
    if (ctx->pc == 0x382140u) {
        ctx->pc = 0x382140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38213Cu;
        // 0x382140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382144u;
        goto label_382144;
    }
    ctx->pc = 0x38213Cu;
    SET_GPR_U32(ctx, 31, 0x382144u);
    ctx->pc = 0x382140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38213Cu;
    // 0x382140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38213Cu, 0x382144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382144u;
label_382144:
    // 0x382144: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_382148:
    if (ctx->pc == 0x382148u) {
        ctx->pc = 0x382148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382144u;
        // 0x382148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38214Cu;
        goto label_38214c;
    }
    ctx->pc = 0x382144u;
    {
        const bool branch_taken_0x382144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382144u;
        // 0x382148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382144) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x38214Cu;
label_38214c:
    // 0x38214c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_382150:
    // 0x382150: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x382150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_382154:
    // 0x382154: 0xc103468  jal         func_40D1A0
label_382158:
    if (ctx->pc == 0x382158u) {
        ctx->pc = 0x382158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382154u;
        // 0x382158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38215Cu;
        goto label_38215c;
    }
    ctx->pc = 0x382154u;
    SET_GPR_U32(ctx, 31, 0x38215Cu);
    ctx->pc = 0x382158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382154u;
    // 0x382158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x382154u, 0x38215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38215Cu;
label_38215c:
    // 0x38215c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_382160:
    if (ctx->pc == 0x382160u) {
        ctx->pc = 0x382160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38215Cu;
        // 0x382160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382164u;
        goto label_382164;
    }
    ctx->pc = 0x38215Cu;
    {
        const bool branch_taken_0x38215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38215Cu;
        // 0x382160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38215c) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x382164u;
label_382164:
    // 0x382164: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x382164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_382168:
    // 0x382168: 0xc103468  jal         func_40D1A0
label_38216c:
    if (ctx->pc == 0x38216Cu) {
        ctx->pc = 0x38216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382168u;
        // 0x38216c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382170u;
        goto label_382170;
    }
    ctx->pc = 0x382168u;
    SET_GPR_U32(ctx, 31, 0x382170u);
    ctx->pc = 0x38216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382168u;
    // 0x38216c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x382168u, 0x382170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382170u;
label_382170:
    // 0x382170: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_382174:
    if (ctx->pc == 0x382174u) {
        ctx->pc = 0x382174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382170u;
        // 0x382174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382178u;
        goto label_382178;
    }
    ctx->pc = 0x382170u;
    {
        const bool branch_taken_0x382170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382170u;
        // 0x382174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382170) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x382178u;
label_382178:
    // 0x382178: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x382178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38217c:
    // 0x38217c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_382180:
    if (ctx->pc == 0x382180u) {
        ctx->pc = 0x382180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38217Cu;
        // 0x382180: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x382184u;
        goto label_382184;
    }
    ctx->pc = 0x38217Cu;
    {
        const bool branch_taken_0x38217c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38217Cu;
        // 0x382180: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38217c) {
            ctx->pc = 0x3821F0u;
            goto label_3821f0;
        }
    }
    ctx->pc = 0x382184u;
label_382184:
    // 0x382184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_382188:
    if (ctx->pc == 0x382188u) {
        ctx->pc = 0x382188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382184u;
        // 0x382188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38218Cu;
        goto label_38218c;
    }
    ctx->pc = 0x382184u;
    {
        const bool branch_taken_0x382184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382184u;
        // 0x382188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382184) {
            ctx->pc = 0x38219Cu;
            goto label_38219c;
        }
    }
    ctx->pc = 0x38218Cu;
label_38218c:
    // 0x38218c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_382190:
    if (ctx->pc == 0x382190u) {
        ctx->pc = 0x382190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38218Cu;
        // 0x382190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382194u;
        goto label_382194;
    }
    ctx->pc = 0x38218Cu;
    {
        const bool branch_taken_0x38218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38218Cu;
        // 0x382190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38218c) {
            ctx->pc = 0x3821B0u;
            goto label_3821b0;
        }
    }
    ctx->pc = 0x382194u;
label_382194:
    // 0x382194: 0x10000055  b           . + 4 + (0x55 << 2)
label_382198:
    if (ctx->pc == 0x382198u) {
        ctx->pc = 0x382198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382194u;
        // 0x382198: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38219Cu;
        goto label_38219c;
    }
    ctx->pc = 0x382194u;
    {
        const bool branch_taken_0x382194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382194u;
        // 0x382198: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382194) {
            ctx->pc = 0x3822ECu;
            goto label_3822ec;
        }
    }
    ctx->pc = 0x38219Cu;
label_38219c:
    // 0x38219c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3821a0:
    // 0x3821a0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_3821a4:
    if (ctx->pc == 0x3821A4u) {
        ctx->pc = 0x3821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A0u;
        // 0x3821a4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821A8u;
        goto label_3821a8;
    }
    ctx->pc = 0x3821A0u;
    {
        const bool branch_taken_0x3821a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A0u;
        // 0x3821a4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821a0) {
            ctx->pc = 0x382238u;
            goto label_382238;
        }
    }
    ctx->pc = 0x3821A8u;
label_3821a8:
    // 0x3821a8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3821ac:
    if (ctx->pc == 0x3821ACu) {
        ctx->pc = 0x3821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A8u;
        // 0x3821ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821B0u;
        goto label_3821b0;
    }
    ctx->pc = 0x3821A8u;
    {
        const bool branch_taken_0x3821a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A8u;
        // 0x3821ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821a8) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x3821B0u;
label_3821b0:
    // 0x3821b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3821b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3821b4:
    // 0x3821b4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3821b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3821b8:
    // 0x3821b8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3821b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3821bc:
    // 0x3821bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3821bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3821c0:
    // 0x3821c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3821c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3821c4:
    // 0x3821c4: 0x40f809  jalr        $v0
label_3821c8:
    if (ctx->pc == 0x3821C8u) {
        ctx->pc = 0x3821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821C4u;
        // 0x3821c8: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821CCu;
        goto label_3821cc;
    }
    ctx->pc = 0x3821C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3821CCu);
        ctx->pc = 0x3821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821C4u;
        // 0x3821c8: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3821C4u, 0x3821CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3821CCu;
label_3821cc:
    // 0x3821cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3821d0:
    if (ctx->pc == 0x3821D0u) {
        ctx->pc = 0x3821D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821CCu;
        // 0x3821d0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821D4u;
        goto label_3821d4;
    }
    ctx->pc = 0x3821CCu;
    {
        const bool branch_taken_0x3821cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821CCu;
        // 0x3821d0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821cc) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x3821D4u;
label_3821d4:
    // 0x3821d4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3821d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3821d8:
    // 0x3821d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3821d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3821dc:
    // 0x3821dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3821dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3821e0:
    // 0x3821e0: 0xc103468  jal         func_40D1A0
label_3821e4:
    if (ctx->pc == 0x3821E4u) {
        ctx->pc = 0x3821E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821E0u;
        // 0x3821e4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821E8u;
        goto label_3821e8;
    }
    ctx->pc = 0x3821E0u;
    SET_GPR_U32(ctx, 31, 0x3821E8u);
    ctx->pc = 0x3821E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3821E0u;
    // 0x3821e4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3821E0u, 0x3821E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3821E8u;
label_3821e8:
    // 0x3821e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3821ec:
    if (ctx->pc == 0x3821ECu) {
        ctx->pc = 0x3821F0u;
        goto label_3821f0;
    }
    ctx->pc = 0x3821E8u;
    {
        const bool branch_taken_0x3821e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3821e8) {
            ctx->pc = 0x382228u;
            goto label_382228;
        }
    }
    ctx->pc = 0x3821F0u;
label_3821f0:
    // 0x3821f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3821f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3821f4:
    // 0x3821f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3821f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3821f8:
    // 0x3821f8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3821f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3821fc:
    // 0x3821fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3821fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_382200:
    // 0x382200: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x382200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_382204:
    // 0x382204: 0x40f809  jalr        $v0
label_382208:
    if (ctx->pc == 0x382208u) {
        ctx->pc = 0x382208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382204u;
        // 0x382208: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38220Cu;
        goto label_38220c;
    }
    ctx->pc = 0x382204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38220Cu);
        ctx->pc = 0x382208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382204u;
        // 0x382208: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382204u, 0x38220Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38220Cu;
label_38220c:
    // 0x38220c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_382210:
    if (ctx->pc == 0x382210u) {
        ctx->pc = 0x382210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38220Cu;
        // 0x382210: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382214u;
        goto label_382214;
    }
    ctx->pc = 0x38220Cu;
    {
        const bool branch_taken_0x38220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38220Cu;
        // 0x382210: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38220c) {
            ctx->pc = 0x382230u;
            goto label_382230;
        }
    }
    ctx->pc = 0x382214u;
label_382214:
    // 0x382214: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x382214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382218:
    // 0x382218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x382218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38221c:
    // 0x38221c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_382220:
    // 0x382220: 0xc103454  jal         func_40D150
label_382224:
    if (ctx->pc == 0x382224u) {
        ctx->pc = 0x382224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382220u;
        // 0x382224: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382228u;
        goto label_382228;
    }
    ctx->pc = 0x382220u;
    SET_GPR_U32(ctx, 31, 0x382228u);
    ctx->pc = 0x382224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382220u;
    // 0x382224: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x382220u, 0x382228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382228u;
label_382228:
    // 0x382228: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_38222c:
    if (ctx->pc == 0x38222Cu) {
        ctx->pc = 0x38222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382228u;
        // 0x38222c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382230u;
        goto label_382230;
    }
    ctx->pc = 0x382228u;
    {
        const bool branch_taken_0x382228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382228u;
        // 0x38222c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382228) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x382230u;
label_382230:
    // 0x382230: 0x1000002d  b           . + 4 + (0x2D << 2)
label_382234:
    if (ctx->pc == 0x382234u) {
        ctx->pc = 0x382234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382230u;
        // 0x382234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382238u;
        goto label_382238;
    }
    ctx->pc = 0x382230u;
    {
        const bool branch_taken_0x382230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382230u;
        // 0x382234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382230) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x382238u;
label_382238:
    // 0x382238: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x382238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38223c:
    // 0x38223c: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x38223cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_382240:
    // 0x382240: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x382240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_382244:
    // 0x382244: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x382244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_382248:
    // 0x382248: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x382248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38224c:
    // 0x38224c: 0x40f809  jalr        $v0
label_382250:
    if (ctx->pc == 0x382250u) {
        ctx->pc = 0x382250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38224Cu;
        // 0x382250: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x382254u;
        goto label_382254;
    }
    ctx->pc = 0x38224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382254u);
        ctx->pc = 0x382250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38224Cu;
        // 0x382250: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38224Cu, 0x382254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382254u;
label_382254:
    // 0x382254: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x382254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_382258:
    // 0x382258: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x382258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_38225c:
    // 0x38225c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_382260:
    if (ctx->pc == 0x382260u) {
        ctx->pc = 0x382260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38225Cu;
        // 0x382260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382264u;
        goto label_382264;
    }
    ctx->pc = 0x38225Cu;
    {
        const bool branch_taken_0x38225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38225Cu;
        // 0x382260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38225c) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x382264u;
label_382264:
    // 0x382264: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382268:
    // 0x382268: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_38226c:
    if (ctx->pc == 0x38226Cu) {
        ctx->pc = 0x38226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382268u;
        // 0x38226c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382270u;
        goto label_382270;
    }
    ctx->pc = 0x382268u;
    {
        const bool branch_taken_0x382268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382268u;
        // 0x38226c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382268) {
            ctx->pc = 0x3822E4u;
            goto label_3822e4;
        }
    }
    ctx->pc = 0x382270u;
label_382270:
    // 0x382270: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x382270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382274:
    // 0x382274: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x382274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_382278:
    // 0x382278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38227c:
    // 0x38227c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_382280:
    // 0x382280: 0xc103468  jal         func_40D1A0
label_382284:
    if (ctx->pc == 0x382284u) {
        ctx->pc = 0x382284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382280u;
        // 0x382284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382288u;
        goto label_382288;
    }
    ctx->pc = 0x382280u;
    SET_GPR_U32(ctx, 31, 0x382288u);
    ctx->pc = 0x382284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382280u;
    // 0x382284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x382280u, 0x382288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382288u;
label_382288:
    // 0x382288: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_38228c:
    if (ctx->pc == 0x38228Cu) {
        ctx->pc = 0x38228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382288u;
        // 0x38228c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382290u;
        goto label_382290;
    }
    ctx->pc = 0x382288u;
    {
        const bool branch_taken_0x382288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382288u;
        // 0x38228c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382288) {
            ctx->pc = 0x382230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382230;
        }
    }
    ctx->pc = 0x382290u;
label_382290:
    // 0x382290: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
label_382294:
    if (ctx->pc == 0x382294u) {
        ctx->pc = 0x382294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382290u;
        // 0x382294: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382298u;
        goto label_382298;
    }
    ctx->pc = 0x382290u;
    {
        const bool branch_taken_0x382290 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x382294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382290u;
        // 0x382294: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382290) {
            ctx->pc = 0x3822CCu;
            goto label_3822cc;
        }
    }
    ctx->pc = 0x382298u;
label_382298:
    // 0x382298: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x382298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_38229c:
    // 0x38229c: 0x40f809  jalr        $v0
label_3822a0:
    if (ctx->pc == 0x3822A0u) {
        ctx->pc = 0x3822A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38229Cu;
        // 0x3822a0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822A4u;
        goto label_3822a4;
    }
    ctx->pc = 0x38229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3822A4u);
        ctx->pc = 0x3822A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38229Cu;
        // 0x3822a0: 0x34a5011f  ori         $a1, $a1, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38229Cu, 0x3822A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3822A4u;
label_3822a4:
    // 0x3822a4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_3822a8:
    if (ctx->pc == 0x3822A8u) {
        ctx->pc = 0x3822A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822A4u;
        // 0x3822a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822ACu;
        goto label_3822ac;
    }
    ctx->pc = 0x3822A4u;
    {
        const bool branch_taken_0x3822a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822A4u;
        // 0x3822a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822a4) {
            ctx->pc = 0x382230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382230;
        }
    }
    ctx->pc = 0x3822ACu;
label_3822ac:
    // 0x3822ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3822acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3822b0:
    // 0x3822b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3822b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3822b4:
    // 0x3822b4: 0xc10480a  jal         func_412028
label_3822b8:
    if (ctx->pc == 0x3822B8u) {
        ctx->pc = 0x3822B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822B4u;
        // 0x3822b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822BCu;
        goto label_3822bc;
    }
    ctx->pc = 0x3822B4u;
    SET_GPR_U32(ctx, 31, 0x3822BCu);
    ctx->pc = 0x3822B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3822B4u;
    // 0x3822b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3822B4u, 0x3822BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3822BCu;
label_3822bc:
    // 0x3822bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3822c0:
    if (ctx->pc == 0x3822C0u) {
        ctx->pc = 0x3822C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822BCu;
        // 0x3822c0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822C4u;
        goto label_3822c4;
    }
    ctx->pc = 0x3822BCu;
    {
        const bool branch_taken_0x3822bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3822bc) {
            ctx->pc = 0x3822C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3822BCu;
            // 0x3822c0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3822D4u;
            goto label_3822d4;
        }
    }
    ctx->pc = 0x3822C4u;
label_3822c4:
    // 0x3822c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3822c8:
    if (ctx->pc == 0x3822C8u) {
        ctx->pc = 0x3822C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822C4u;
        // 0x3822c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822CCu;
        goto label_3822cc;
    }
    ctx->pc = 0x3822C4u;
    {
        const bool branch_taken_0x3822c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822C4u;
        // 0x3822c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822c4) {
            ctx->pc = 0x3822E8u;
            goto label_3822e8;
        }
    }
    ctx->pc = 0x3822CCu;
label_3822cc:
    // 0x3822cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3822ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3822d0:
    // 0x3822d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3822d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3822d4:
    // 0x3822d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3822d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3822d8:
    // 0x3822d8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3822d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3822dc:
    // 0x3822dc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_3822e0:
    if (ctx->pc == 0x3822E0u) {
        ctx->pc = 0x3822E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822DCu;
        // 0x3822e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822E4u;
        goto label_3822e4;
    }
    ctx->pc = 0x3822DCu;
    {
        const bool branch_taken_0x3822dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3822E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822DCu;
        // 0x3822e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822dc) {
            ctx->pc = 0x382278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382278;
        }
    }
    ctx->pc = 0x3822E4u;
label_3822e4:
    // 0x3822e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3822e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3822e8:
    // 0x3822e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3822e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3822ec:
    // 0x3822ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3822ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3822f0:
    // 0x3822f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3822f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3822f4:
    // 0x3822f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3822f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3822f8:
    // 0x3822f8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3822f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3822fc:
    // 0x3822fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3822fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_382300:
    // 0x382300: 0x3e00008  jr          $ra
label_382304:
    if (ctx->pc == 0x382304u) {
        ctx->pc = 0x382304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382300u;
        // 0x382304: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382308u;
        goto label_fallthrough_0x382300;
    }
    ctx->pc = 0x382300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382300u;
        // 0x382304: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x382300:
    ctx->pc = 0x382308u;
}
