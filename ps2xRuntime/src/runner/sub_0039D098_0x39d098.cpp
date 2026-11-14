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

// Function: sub_0039D098
// Address: 0x39d098 - 0x39d478
void sub_0039D098_0x39d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D098_0x39d098");
#endif

    switch (ctx->pc) {
        case 0x39d098u: goto label_39d098;
        case 0x39d09cu: goto label_39d09c;
        case 0x39d0a0u: goto label_39d0a0;
        case 0x39d0a4u: goto label_39d0a4;
        case 0x39d0a8u: goto label_39d0a8;
        case 0x39d0acu: goto label_39d0ac;
        case 0x39d0b0u: goto label_39d0b0;
        case 0x39d0b4u: goto label_39d0b4;
        case 0x39d0b8u: goto label_39d0b8;
        case 0x39d0bcu: goto label_39d0bc;
        case 0x39d0c0u: goto label_39d0c0;
        case 0x39d0c4u: goto label_39d0c4;
        case 0x39d0c8u: goto label_39d0c8;
        case 0x39d0ccu: goto label_39d0cc;
        case 0x39d0d0u: goto label_39d0d0;
        case 0x39d0d4u: goto label_39d0d4;
        case 0x39d0d8u: goto label_39d0d8;
        case 0x39d0dcu: goto label_39d0dc;
        case 0x39d0e0u: goto label_39d0e0;
        case 0x39d0e4u: goto label_39d0e4;
        case 0x39d0e8u: goto label_39d0e8;
        case 0x39d0ecu: goto label_39d0ec;
        case 0x39d0f0u: goto label_39d0f0;
        case 0x39d0f4u: goto label_39d0f4;
        case 0x39d0f8u: goto label_39d0f8;
        case 0x39d0fcu: goto label_39d0fc;
        case 0x39d100u: goto label_39d100;
        case 0x39d104u: goto label_39d104;
        case 0x39d108u: goto label_39d108;
        case 0x39d10cu: goto label_39d10c;
        case 0x39d110u: goto label_39d110;
        case 0x39d114u: goto label_39d114;
        case 0x39d118u: goto label_39d118;
        case 0x39d11cu: goto label_39d11c;
        case 0x39d120u: goto label_39d120;
        case 0x39d124u: goto label_39d124;
        case 0x39d128u: goto label_39d128;
        case 0x39d12cu: goto label_39d12c;
        case 0x39d130u: goto label_39d130;
        case 0x39d134u: goto label_39d134;
        case 0x39d138u: goto label_39d138;
        case 0x39d13cu: goto label_39d13c;
        case 0x39d140u: goto label_39d140;
        case 0x39d144u: goto label_39d144;
        case 0x39d148u: goto label_39d148;
        case 0x39d14cu: goto label_39d14c;
        case 0x39d150u: goto label_39d150;
        case 0x39d154u: goto label_39d154;
        case 0x39d158u: goto label_39d158;
        case 0x39d15cu: goto label_39d15c;
        case 0x39d160u: goto label_39d160;
        case 0x39d164u: goto label_39d164;
        case 0x39d168u: goto label_39d168;
        case 0x39d16cu: goto label_39d16c;
        case 0x39d170u: goto label_39d170;
        case 0x39d174u: goto label_39d174;
        case 0x39d178u: goto label_39d178;
        case 0x39d17cu: goto label_39d17c;
        case 0x39d180u: goto label_39d180;
        case 0x39d184u: goto label_39d184;
        case 0x39d188u: goto label_39d188;
        case 0x39d18cu: goto label_39d18c;
        case 0x39d190u: goto label_39d190;
        case 0x39d194u: goto label_39d194;
        case 0x39d198u: goto label_39d198;
        case 0x39d19cu: goto label_39d19c;
        case 0x39d1a0u: goto label_39d1a0;
        case 0x39d1a4u: goto label_39d1a4;
        case 0x39d1a8u: goto label_39d1a8;
        case 0x39d1acu: goto label_39d1ac;
        case 0x39d1b0u: goto label_39d1b0;
        case 0x39d1b4u: goto label_39d1b4;
        case 0x39d1b8u: goto label_39d1b8;
        case 0x39d1bcu: goto label_39d1bc;
        case 0x39d1c0u: goto label_39d1c0;
        case 0x39d1c4u: goto label_39d1c4;
        case 0x39d1c8u: goto label_39d1c8;
        case 0x39d1ccu: goto label_39d1cc;
        case 0x39d1d0u: goto label_39d1d0;
        case 0x39d1d4u: goto label_39d1d4;
        case 0x39d1d8u: goto label_39d1d8;
        case 0x39d1dcu: goto label_39d1dc;
        case 0x39d1e0u: goto label_39d1e0;
        case 0x39d1e4u: goto label_39d1e4;
        case 0x39d1e8u: goto label_39d1e8;
        case 0x39d1ecu: goto label_39d1ec;
        case 0x39d1f0u: goto label_39d1f0;
        case 0x39d1f4u: goto label_39d1f4;
        case 0x39d1f8u: goto label_39d1f8;
        case 0x39d1fcu: goto label_39d1fc;
        case 0x39d200u: goto label_39d200;
        case 0x39d204u: goto label_39d204;
        case 0x39d208u: goto label_39d208;
        case 0x39d20cu: goto label_39d20c;
        case 0x39d210u: goto label_39d210;
        case 0x39d214u: goto label_39d214;
        case 0x39d218u: goto label_39d218;
        case 0x39d21cu: goto label_39d21c;
        case 0x39d220u: goto label_39d220;
        case 0x39d224u: goto label_39d224;
        case 0x39d228u: goto label_39d228;
        case 0x39d22cu: goto label_39d22c;
        case 0x39d230u: goto label_39d230;
        case 0x39d234u: goto label_39d234;
        case 0x39d238u: goto label_39d238;
        case 0x39d23cu: goto label_39d23c;
        case 0x39d240u: goto label_39d240;
        case 0x39d244u: goto label_39d244;
        case 0x39d248u: goto label_39d248;
        case 0x39d24cu: goto label_39d24c;
        case 0x39d250u: goto label_39d250;
        case 0x39d254u: goto label_39d254;
        case 0x39d258u: goto label_39d258;
        case 0x39d25cu: goto label_39d25c;
        case 0x39d260u: goto label_39d260;
        case 0x39d264u: goto label_39d264;
        case 0x39d268u: goto label_39d268;
        case 0x39d26cu: goto label_39d26c;
        case 0x39d270u: goto label_39d270;
        case 0x39d274u: goto label_39d274;
        case 0x39d278u: goto label_39d278;
        case 0x39d27cu: goto label_39d27c;
        case 0x39d280u: goto label_39d280;
        case 0x39d284u: goto label_39d284;
        case 0x39d288u: goto label_39d288;
        case 0x39d28cu: goto label_39d28c;
        case 0x39d290u: goto label_39d290;
        case 0x39d294u: goto label_39d294;
        case 0x39d298u: goto label_39d298;
        case 0x39d29cu: goto label_39d29c;
        case 0x39d2a0u: goto label_39d2a0;
        case 0x39d2a4u: goto label_39d2a4;
        case 0x39d2a8u: goto label_39d2a8;
        case 0x39d2acu: goto label_39d2ac;
        case 0x39d2b0u: goto label_39d2b0;
        case 0x39d2b4u: goto label_39d2b4;
        case 0x39d2b8u: goto label_39d2b8;
        case 0x39d2bcu: goto label_39d2bc;
        case 0x39d2c0u: goto label_39d2c0;
        case 0x39d2c4u: goto label_39d2c4;
        case 0x39d2c8u: goto label_39d2c8;
        case 0x39d2ccu: goto label_39d2cc;
        case 0x39d2d0u: goto label_39d2d0;
        case 0x39d2d4u: goto label_39d2d4;
        case 0x39d2d8u: goto label_39d2d8;
        case 0x39d2dcu: goto label_39d2dc;
        case 0x39d2e0u: goto label_39d2e0;
        case 0x39d2e4u: goto label_39d2e4;
        case 0x39d2e8u: goto label_39d2e8;
        case 0x39d2ecu: goto label_39d2ec;
        case 0x39d2f0u: goto label_39d2f0;
        case 0x39d2f4u: goto label_39d2f4;
        case 0x39d2f8u: goto label_39d2f8;
        case 0x39d2fcu: goto label_39d2fc;
        case 0x39d300u: goto label_39d300;
        case 0x39d304u: goto label_39d304;
        case 0x39d308u: goto label_39d308;
        case 0x39d30cu: goto label_39d30c;
        case 0x39d310u: goto label_39d310;
        case 0x39d314u: goto label_39d314;
        case 0x39d318u: goto label_39d318;
        case 0x39d31cu: goto label_39d31c;
        case 0x39d320u: goto label_39d320;
        case 0x39d324u: goto label_39d324;
        case 0x39d328u: goto label_39d328;
        case 0x39d32cu: goto label_39d32c;
        case 0x39d330u: goto label_39d330;
        case 0x39d334u: goto label_39d334;
        case 0x39d338u: goto label_39d338;
        case 0x39d33cu: goto label_39d33c;
        case 0x39d340u: goto label_39d340;
        case 0x39d344u: goto label_39d344;
        case 0x39d348u: goto label_39d348;
        case 0x39d34cu: goto label_39d34c;
        case 0x39d350u: goto label_39d350;
        case 0x39d354u: goto label_39d354;
        case 0x39d358u: goto label_39d358;
        case 0x39d35cu: goto label_39d35c;
        case 0x39d360u: goto label_39d360;
        case 0x39d364u: goto label_39d364;
        case 0x39d368u: goto label_39d368;
        case 0x39d36cu: goto label_39d36c;
        case 0x39d370u: goto label_39d370;
        case 0x39d374u: goto label_39d374;
        case 0x39d378u: goto label_39d378;
        case 0x39d37cu: goto label_39d37c;
        case 0x39d380u: goto label_39d380;
        case 0x39d384u: goto label_39d384;
        case 0x39d388u: goto label_39d388;
        case 0x39d38cu: goto label_39d38c;
        case 0x39d390u: goto label_39d390;
        case 0x39d394u: goto label_39d394;
        case 0x39d398u: goto label_39d398;
        case 0x39d39cu: goto label_39d39c;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a4u: goto label_39d3a4;
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3acu: goto label_39d3ac;
        case 0x39d3b0u: goto label_39d3b0;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3b8u: goto label_39d3b8;
        case 0x39d3bcu: goto label_39d3bc;
        case 0x39d3c0u: goto label_39d3c0;
        case 0x39d3c4u: goto label_39d3c4;
        case 0x39d3c8u: goto label_39d3c8;
        case 0x39d3ccu: goto label_39d3cc;
        case 0x39d3d0u: goto label_39d3d0;
        case 0x39d3d4u: goto label_39d3d4;
        case 0x39d3d8u: goto label_39d3d8;
        case 0x39d3dcu: goto label_39d3dc;
        case 0x39d3e0u: goto label_39d3e0;
        case 0x39d3e4u: goto label_39d3e4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3ecu: goto label_39d3ec;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d3f4u: goto label_39d3f4;
        case 0x39d3f8u: goto label_39d3f8;
        case 0x39d3fcu: goto label_39d3fc;
        case 0x39d400u: goto label_39d400;
        case 0x39d404u: goto label_39d404;
        case 0x39d408u: goto label_39d408;
        case 0x39d40cu: goto label_39d40c;
        case 0x39d410u: goto label_39d410;
        case 0x39d414u: goto label_39d414;
        case 0x39d418u: goto label_39d418;
        case 0x39d41cu: goto label_39d41c;
        case 0x39d420u: goto label_39d420;
        case 0x39d424u: goto label_39d424;
        case 0x39d428u: goto label_39d428;
        case 0x39d42cu: goto label_39d42c;
        case 0x39d430u: goto label_39d430;
        case 0x39d434u: goto label_39d434;
        case 0x39d438u: goto label_39d438;
        case 0x39d43cu: goto label_39d43c;
        case 0x39d440u: goto label_39d440;
        case 0x39d444u: goto label_39d444;
        case 0x39d448u: goto label_39d448;
        case 0x39d44cu: goto label_39d44c;
        case 0x39d450u: goto label_39d450;
        case 0x39d454u: goto label_39d454;
        case 0x39d458u: goto label_39d458;
        case 0x39d45cu: goto label_39d45c;
        case 0x39d460u: goto label_39d460;
        case 0x39d464u: goto label_39d464;
        case 0x39d468u: goto label_39d468;
        case 0x39d46cu: goto label_39d46c;
        case 0x39d470u: goto label_39d470;
        case 0x39d474u: goto label_39d474;
        default: break;
    }

    ctx->pc = 0x39d098u;

label_39d098:
    // 0x39d098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39d09c:
    // 0x39d09c: 0x8f82a9e4  lw          $v0, -0x561C($gp)
    ctx->pc = 0x39d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
label_39d0a0:
    // 0x39d0a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39d0a4:
    // 0x39d0a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39d0a8:
    // 0x39d0a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39d0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d0ac:
    // 0x39d0ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39d0b0:
    // 0x39d0b0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x39d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d0b4:
    // 0x39d0b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39d0b8:
    // 0x39d0b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39d0bc:
    // 0x39d0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d0c0:
    // 0x39d0c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39d0c4:
    // 0x39d0c4: 0x40f809  jalr        $v0
label_39d0c8:
    if (ctx->pc == 0x39D0C8u) {
        ctx->pc = 0x39D0CCu;
        goto label_39d0cc;
    }
    ctx->pc = 0x39D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D0CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D0C4u, 0x39D0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D0CCu;
label_39d0cc:
    // 0x39d0cc: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_39d0d0:
    if (ctx->pc == 0x39D0D0u) {
        ctx->pc = 0x39D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0CCu;
        // 0x39d0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0D4u;
        goto label_39d0d4;
    }
    ctx->pc = 0x39D0CCu;
    {
        const bool branch_taken_0x39d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d0cc) {
            ctx->pc = 0x39D0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D0CCu;
            // 0x39d0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D16Cu;
            goto label_39d16c;
        }
    }
    ctx->pc = 0x39D0D4u;
label_39d0d4:
    // 0x39d0d4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x39d0d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d0d8:
    // 0x39d0d8: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_39d0dc:
    if (ctx->pc == 0x39D0DCu) {
        ctx->pc = 0x39D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0D8u;
        // 0x39d0dc: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0E0u;
        goto label_39d0e0;
    }
    ctx->pc = 0x39D0D8u;
    {
        const bool branch_taken_0x39d0d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0D8u;
        // 0x39d0dc: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0d8) {
            ctx->pc = 0x39D168u;
            goto label_39d168;
        }
    }
    ctx->pc = 0x39D0E0u;
label_39d0e0:
    // 0x39d0e0: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x39d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_39d0e4:
    // 0x39d0e4: 0x1212001d  beq         $s0, $s2, . + 4 + (0x1D << 2)
label_39d0e8:
    if (ctx->pc == 0x39D0E8u) {
        ctx->pc = 0x39D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0E4u;
        // 0x39d0e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D0ECu;
        goto label_39d0ec;
    }
    ctx->pc = 0x39D0E4u;
    {
        const bool branch_taken_0x39d0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x39D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0E4u;
        // 0x39d0e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0e4) {
            ctx->pc = 0x39D15Cu;
            goto label_39d15c;
        }
    }
    ctx->pc = 0x39D0ECu;
label_39d0ec:
    // 0x39d0ec: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x39d0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39d0f0:
    // 0x39d0f0: 0x2609fff4  addiu       $t1, $s0, -0xC
    ctx->pc = 0x39d0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39d0f4:
    // 0x39d0f4: 0x0  nop
    ctx->pc = 0x39d0f4u;
    // NOP
label_39d0f8:
    // 0x39d0f8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_39d0fc:
    // 0x39d0fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39d100:
    if (ctx->pc == 0x39D100u) {
        ctx->pc = 0x39D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0FCu;
        // 0x39d100: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D104u;
        goto label_39d104;
    }
    ctx->pc = 0x39D0FCu;
    {
        const bool branch_taken_0x39d0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0FCu;
        // 0x39d100: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0fc) {
            ctx->pc = 0x39D154u;
            goto label_39d154;
        }
    }
    ctx->pc = 0x39D104u;
label_39d104:
    // 0x39d104: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x39d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_39d108:
    // 0x39d108: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39d10c:
    if (ctx->pc == 0x39D10Cu) {
        ctx->pc = 0x39D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D108u;
        // 0x39d10c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D110u;
        goto label_39d110;
    }
    ctx->pc = 0x39D108u;
    {
        const bool branch_taken_0x39d108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D108u;
        // 0x39d10c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d108) {
            ctx->pc = 0x39D154u;
            goto label_39d154;
        }
    }
    ctx->pc = 0x39D110u;
label_39d110:
    // 0x39d110: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x39d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39d114:
    // 0x39d114: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x39d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39d118:
    // 0x39d118: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39d11c:
    // 0x39d11c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39d120:
    // 0x39d120: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x39d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_39d124:
    // 0x39d124: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x39d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_39d128:
    // 0x39d128: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x39d128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39d12c:
    // 0x39d12c: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x39d12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39d130:
    // 0x39d130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39d134:
    // 0x39d134: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x39d134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_39d138:
    // 0x39d138: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x39d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39d13c:
    // 0x39d13c: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x39d13cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39d140:
    // 0x39d140: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39d140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39d144:
    // 0x39d144: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x39d144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39d148:
    // 0x39d148: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x39d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39d14c:
    // 0x39d14c: 0x40f809  jalr        $v0
label_39d150:
    if (ctx->pc == 0x39D150u) {
        ctx->pc = 0x39D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D14Cu;
        // 0x39d150: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D154u;
        goto label_39d154;
    }
    ctx->pc = 0x39D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D154u);
        ctx->pc = 0x39D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D14Cu;
        // 0x39d150: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D14Cu, 0x39D154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D154u;
label_39d154:
    // 0x39d154: 0x1612ffe8  bne         $s0, $s2, . + 4 + (-0x18 << 2)
label_39d158:
    if (ctx->pc == 0x39D158u) {
        ctx->pc = 0x39D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D154u;
        // 0x39d158: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D15Cu;
        goto label_39d15c;
    }
    ctx->pc = 0x39D154u;
    {
        const bool branch_taken_0x39d154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x39D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D154u;
        // 0x39d158: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d154) {
            ctx->pc = 0x39D0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d0f8;
        }
    }
    ctx->pc = 0x39D15Cu;
label_39d15c:
    // 0x39d15c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d160:
    // 0x39d160: 0xc0e6ade  jal         func_39AB78
label_39d164:
    if (ctx->pc == 0x39D164u) {
        ctx->pc = 0x39D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D160u;
        // 0x39d164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D168u;
        goto label_39d168;
    }
    ctx->pc = 0x39D160u;
    SET_GPR_U32(ctx, 31, 0x39D168u);
    ctx->pc = 0x39D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D160u;
    // 0x39d164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB78u, 0x39D160u, 0x39D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D168u;
label_39d168:
    // 0x39d168: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39d168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d16c:
    // 0x39d16c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39d16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39d170:
    // 0x39d170: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39d170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d174:
    // 0x39d174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39d174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d178:
    // 0x39d178: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39d178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d17c:
    // 0x39d17c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39d17cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d180:
    // 0x39d180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d184:
    // 0x39d184: 0x3e00008  jr          $ra
label_39d188:
    if (ctx->pc == 0x39D188u) {
        ctx->pc = 0x39D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D184u;
        // 0x39d188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D18Cu;
        goto label_39d18c;
    }
    ctx->pc = 0x39D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D184u;
        // 0x39d188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D18Cu;
label_39d18c:
    // 0x39d18c: 0x0  nop
    ctx->pc = 0x39d18cu;
    // NOP
label_39d190:
    // 0x39d190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39d194:
    // 0x39d194: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x39d194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_39d198:
    // 0x39d198: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_39d19c:
    // 0x39d19c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39d1a0:
    // 0x39d1a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d1a4:
    // 0x39d1a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_39d1a8:
    // 0x39d1a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39d1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d1ac:
    // 0x39d1ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_39d1b0:
    // 0x39d1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d1b4:
    // 0x39d1b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_39d1b8:
    // 0x39d1b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39d1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39d1bc:
    // 0x39d1bc: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_39d1c0:
    if (ctx->pc == 0x39D1C0u) {
        ctx->pc = 0x39D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1BCu;
        // 0x39d1c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1C4u;
        goto label_39d1c4;
    }
    ctx->pc = 0x39D1BCu;
    {
        const bool branch_taken_0x39d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1BCu;
        // 0x39d1c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1bc) {
            ctx->pc = 0x39D438u;
            goto label_39d438;
        }
    }
    ctx->pc = 0x39D1C4u;
label_39d1c4:
    // 0x39d1c4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x39d1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_39d1c8:
    // 0x39d1c8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x39d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_39d1cc:
    // 0x39d1cc: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x39d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_39d1d0:
    // 0x39d1d0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39d1d4:
    // 0x39d1d4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x39d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_39d1d8:
    // 0x39d1d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39d1dc:
    // 0x39d1dc: 0x40f809  jalr        $v0
label_39d1e0:
    if (ctx->pc == 0x39D1E0u) {
        ctx->pc = 0x39D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1DCu;
        // 0x39d1e0: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1E4u;
        goto label_39d1e4;
    }
    ctx->pc = 0x39D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D1E4u);
        ctx->pc = 0x39D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1DCu;
        // 0x39d1e0: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D1DCu, 0x39D1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D1E4u;
label_39d1e4:
    // 0x39d1e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d1e8:
    // 0x39d1e8: 0x1080009c  beqz        $a0, . + 4 + (0x9C << 2)
label_39d1ec:
    if (ctx->pc == 0x39D1ECu) {
        ctx->pc = 0x39D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1E8u;
        // 0x39d1ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1F0u;
        goto label_39d1f0;
    }
    ctx->pc = 0x39D1E8u;
    {
        const bool branch_taken_0x39d1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1E8u;
        // 0x39d1ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1e8) {
            ctx->pc = 0x39D45Cu;
            goto label_39d45c;
        }
    }
    ctx->pc = 0x39D1F0u;
label_39d1f0:
    // 0x39d1f0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x39d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_39d1f4:
    // 0x39d1f4: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_39d1f8:
    if (ctx->pc == 0x39D1F8u) {
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F4u;
        // 0x39d1f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D1FCu;
        goto label_39d1fc;
    }
    ctx->pc = 0x39D1F4u;
    {
        const bool branch_taken_0x39d1f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F4u;
        // 0x39d1f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1f4) {
            ctx->pc = 0x39D290u;
            goto label_39d290;
        }
    }
    ctx->pc = 0x39D1FCu;
label_39d1fc:
    // 0x39d1fc: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x39d1fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_39d200:
    // 0x39d200: 0x61023  negu        $v0, $a2
    ctx->pc = 0x39d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_39d204:
    // 0x39d204: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x39d204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39d208:
    // 0x39d208: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_39d20c:
    if (ctx->pc == 0x39D20Cu) {
        ctx->pc = 0x39D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D208u;
        // 0x39d20c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D210u;
        goto label_39d210;
    }
    ctx->pc = 0x39D208u;
    {
        const bool branch_taken_0x39d208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D208u;
        // 0x39d20c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d208) {
            ctx->pc = 0x39D258u;
            goto label_39d258;
        }
    }
    ctx->pc = 0x39D210u;
label_39d210:
    // 0x39d210: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x39d210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_39d214:
    // 0x39d214: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39d218:
    if (ctx->pc == 0x39D218u) {
        ctx->pc = 0x39D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D214u;
        // 0x39d218: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D21Cu;
        goto label_39d21c;
    }
    ctx->pc = 0x39D214u;
    {
        const bool branch_taken_0x39d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D214u;
        // 0x39d218: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d214) {
            ctx->pc = 0x39D244u;
            goto label_39d244;
        }
    }
    ctx->pc = 0x39D21Cu;
label_39d21c:
    // 0x39d21c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_39d220:
    if (ctx->pc == 0x39D220u) {
        ctx->pc = 0x39D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D21Cu;
        // 0x39d220: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D224u;
        goto label_39d224;
    }
    ctx->pc = 0x39D21Cu;
    {
        const bool branch_taken_0x39d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d21c) {
            ctx->pc = 0x39D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D21Cu;
            // 0x39d220: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D238u;
            goto label_39d238;
        }
    }
    ctx->pc = 0x39D224u;
label_39d224:
    // 0x39d224: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x39d224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
label_39d228:
    // 0x39d228: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x39d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39d22c:
    // 0x39d22c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x39d22cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
label_39d230:
    // 0x39d230: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39d230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39d234:
    // 0x39d234: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x39d234u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_39d238:
    // 0x39d238: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39d238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39d23c:
    // 0x39d23c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x39d23cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_39d240:
    // 0x39d240: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x39d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39d244:
    // 0x39d244: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x39d244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_39d248:
    // 0x39d248: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39d248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39d24c:
    // 0x39d24c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x39d24cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_39d250:
    // 0x39d250: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_39d254:
    if (ctx->pc == 0x39D254u) {
        ctx->pc = 0x39D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D250u;
        // 0x39d254: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D258u;
        goto label_39d258;
    }
    ctx->pc = 0x39D250u;
    {
        const bool branch_taken_0x39d250 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D250u;
        // 0x39d254: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d250) {
            ctx->pc = 0x39D290u;
            goto label_39d290;
        }
    }
    ctx->pc = 0x39D258u;
label_39d258:
    // 0x39d258: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39d258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39d25c:
    // 0x39d25c: 0x0  nop
    ctx->pc = 0x39d25cu;
    // NOP
label_39d260:
    // 0x39d260: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x39d260u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_39d264:
    // 0x39d264: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x39d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_39d268:
    // 0x39d268: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x39d268u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_39d26c:
    // 0x39d26c: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x39d26cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
label_39d270:
    // 0x39d270: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x39d270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
label_39d274:
    // 0x39d274: 0xa4670008  sh          $a3, 0x8($v1)
    ctx->pc = 0x39d274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 7));
label_39d278:
    // 0x39d278: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x39d278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
label_39d27c:
    // 0x39d27c: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x39d27cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 7));
label_39d280:
    // 0x39d280: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x39d280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
label_39d284:
    // 0x39d284: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x39d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_39d288:
    // 0x39d288: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
label_39d28c:
    if (ctx->pc == 0x39D28Cu) {
        ctx->pc = 0x39D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D288u;
        // 0x39d28c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D290u;
        goto label_39d290;
    }
    ctx->pc = 0x39D288u;
    {
        const bool branch_taken_0x39d288 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D288u;
        // 0x39d28c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d288) {
            ctx->pc = 0x39D260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d260;
        }
    }
    ctx->pc = 0x39D290u;
label_39d290:
    // 0x39d290: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x39d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_39d294:
    // 0x39d294: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
label_39d298:
    if (ctx->pc == 0x39D298u) {
        ctx->pc = 0x39D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D294u;
        // 0x39d298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D29Cu;
        goto label_39d29c;
    }
    ctx->pc = 0x39D294u;
    {
        const bool branch_taken_0x39d294 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D294u;
        // 0x39d298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d294) {
            ctx->pc = 0x39D338u;
            goto label_39d338;
        }
    }
    ctx->pc = 0x39D29Cu;
label_39d29c:
    // 0x39d29c: 0x8e49002c  lw          $t1, 0x2C($s2)
    ctx->pc = 0x39d29cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39d2a0:
    // 0x39d2a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x39d2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d2a4:
    // 0x39d2a4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x39d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_39d2a8:
    // 0x39d2a8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x39d2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_39d2ac:
    // 0x39d2ac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x39d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_39d2b0:
    // 0x39d2b0: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x39d2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_39d2b4:
    // 0x39d2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39d2b8:
    // 0x39d2b8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x39d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39d2bc:
    // 0x39d2bc: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x39d2bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_39d2c0:
    // 0x39d2c0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x39d2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39d2c4:
    // 0x39d2c4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x39d2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_39d2c8:
    // 0x39d2c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d2cc:
    if (ctx->pc == 0x39D2CCu) {
        ctx->pc = 0x39D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2C8u;
        // 0x39d2cc: 0xa4a60002  sh          $a2, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2D0u;
        goto label_39d2d0;
    }
    ctx->pc = 0x39D2C8u;
    {
        const bool branch_taken_0x39d2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d2c8) {
            ctx->pc = 0x39D2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D2C8u;
            // 0x39d2cc: 0xa4a60002  sh          $a2, 0x2($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D2D0u;
            goto label_39d2d0;
        }
    }
    ctx->pc = 0x39D2D0u;
label_39d2d0:
    // 0x39d2d0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39d2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39d2d4:
    // 0x39d2d4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x39d2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d2d8:
    // 0x39d2d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d2dc:
    if (ctx->pc == 0x39D2DCu) {
        ctx->pc = 0x39D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2D8u;
        // 0x39d2dc: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2E0u;
        goto label_39d2e0;
    }
    ctx->pc = 0x39D2D8u;
    {
        const bool branch_taken_0x39d2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d2d8) {
            ctx->pc = 0x39D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D2D8u;
            // 0x39d2dc: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D2E0u;
            goto label_39d2e0;
        }
    }
    ctx->pc = 0x39D2E0u;
label_39d2e0:
    // 0x39d2e0: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x39d2e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_39d2e4:
    // 0x39d2e4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x39d2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39d2e8:
    // 0x39d2e8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x39d2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_39d2ec:
    // 0x39d2ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d2f0:
    if (ctx->pc == 0x39D2F0u) {
        ctx->pc = 0x39D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2ECu;
        // 0x39d2f0: 0xa4a60002  sh          $a2, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2F4u;
        goto label_39d2f4;
    }
    ctx->pc = 0x39D2ECu;
    {
        const bool branch_taken_0x39d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d2ec) {
            ctx->pc = 0x39D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D2ECu;
            // 0x39d2f0: 0xa4a60002  sh          $a2, 0x2($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D2F4u;
            goto label_39d2f4;
        }
    }
    ctx->pc = 0x39D2F4u;
label_39d2f4:
    // 0x39d2f4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39d2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39d2f8:
    // 0x39d2f8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x39d2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d2fc:
    // 0x39d2fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d300:
    if (ctx->pc == 0x39D300u) {
        ctx->pc = 0x39D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2FCu;
        // 0x39d300: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D304u;
        goto label_39d304;
    }
    ctx->pc = 0x39D2FCu;
    {
        const bool branch_taken_0x39d2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d2fc) {
            ctx->pc = 0x39D300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D2FCu;
            // 0x39d300: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D304u;
            goto label_39d304;
        }
    }
    ctx->pc = 0x39D304u;
label_39d304:
    // 0x39d304: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x39d304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_39d308:
    // 0x39d308: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x39d308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39d30c:
    // 0x39d30c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x39d30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39d310:
    // 0x39d310: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d314:
    if (ctx->pc == 0x39D314u) {
        ctx->pc = 0x39D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D310u;
        // 0x39d314: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D318u;
        goto label_39d318;
    }
    ctx->pc = 0x39D310u;
    {
        const bool branch_taken_0x39d310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d310) {
            ctx->pc = 0x39D314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D310u;
            // 0x39d314: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D318u;
            goto label_39d318;
        }
    }
    ctx->pc = 0x39D318u;
label_39d318:
    // 0x39d318: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39d318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39d31c:
    // 0x39d31c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x39d31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d320:
    // 0x39d320: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39d324:
    if (ctx->pc == 0x39D324u) {
        ctx->pc = 0x39D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D320u;
        // 0x39d324: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D328u;
        goto label_39d328;
    }
    ctx->pc = 0x39D320u;
    {
        const bool branch_taken_0x39d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d320) {
            ctx->pc = 0x39D324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D320u;
            // 0x39d324: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D328u;
            goto label_39d328;
        }
    }
    ctx->pc = 0x39D328u;
label_39d328:
    // 0x39d328: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x39d328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39d32c:
    // 0x39d32c: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x39d32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_39d330:
    // 0x39d330: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_39d334:
    if (ctx->pc == 0x39D334u) {
        ctx->pc = 0x39D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D330u;
        // 0x39d334: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D338u;
        goto label_39d338;
    }
    ctx->pc = 0x39D330u;
    {
        const bool branch_taken_0x39d330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D330u;
        // 0x39d334: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d330) {
            ctx->pc = 0x39D2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d2a8;
        }
    }
    ctx->pc = 0x39D338u;
label_39d338:
    // 0x39d338: 0x8e480024  lw          $t0, 0x24($s2)
    ctx->pc = 0x39d338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_39d33c:
    // 0x39d33c: 0x1900003a  blez        $t0, . + 4 + (0x3A << 2)
label_39d340:
    if (ctx->pc == 0x39D340u) {
        ctx->pc = 0x39D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D33Cu;
        // 0x39d340: 0x81023  negu        $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D344u;
        goto label_39d344;
    }
    ctx->pc = 0x39D33Cu;
    {
        const bool branch_taken_0x39d33c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x39D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D33Cu;
        // 0x39d340: 0x81023  negu        $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d33c) {
            ctx->pc = 0x39D428u;
            goto label_39d428;
        }
    }
    ctx->pc = 0x39D344u;
label_39d344:
    // 0x39d344: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x39d344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39d348:
    // 0x39d348: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x39d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39d34c:
    // 0x39d34c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_39d350:
    if (ctx->pc == 0x39D350u) {
        ctx->pc = 0x39D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D34Cu;
        // 0x39d350: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D354u;
        goto label_39d354;
    }
    ctx->pc = 0x39D34Cu;
    {
        const bool branch_taken_0x39d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D34Cu;
        // 0x39d350: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d34c) {
            ctx->pc = 0x39D3C0u;
            goto label_39d3c0;
        }
    }
    ctx->pc = 0x39D354u;
label_39d354:
    // 0x39d354: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39d354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39d358:
    // 0x39d358: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_39d35c:
    if (ctx->pc == 0x39D35Cu) {
        ctx->pc = 0x39D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D358u;
        // 0x39d35c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D360u;
        goto label_39d360;
    }
    ctx->pc = 0x39D358u;
    {
        const bool branch_taken_0x39d358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D358u;
        // 0x39d35c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d358) {
            ctx->pc = 0x39D3A0u;
            goto label_39d3a0;
        }
    }
    ctx->pc = 0x39D360u;
label_39d360:
    // 0x39d360: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_39d364:
    if (ctx->pc == 0x39D364u) {
        ctx->pc = 0x39D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D360u;
        // 0x39d364: 0x94e50000  lhu         $a1, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D368u;
        goto label_39d368;
    }
    ctx->pc = 0x39D360u;
    {
        const bool branch_taken_0x39d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d360) {
            ctx->pc = 0x39D364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D360u;
            // 0x39d364: 0x94e50000  lhu         $a1, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D388u;
            goto label_39d388;
        }
    }
    ctx->pc = 0x39D368u;
label_39d368:
    // 0x39d368: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x39d368u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39d36c:
    // 0x39d36c: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x39d36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_39d370:
    // 0x39d370: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x39d370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_39d374:
    // 0x39d374: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x39d374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39d378:
    // 0x39d378: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d37c:
    // 0x39d37c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d380:
    // 0x39d380: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39d380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d384:
    // 0x39d384: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x39d384u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39d388:
    // 0x39d388: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39d388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39d38c:
    // 0x39d38c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x39d38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_39d390:
    // 0x39d390: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d394:
    // 0x39d394: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39d394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39d398:
    // 0x39d398: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d39c:
    // 0x39d39c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39d39cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d3a0:
    // 0x39d3a0: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x39d3a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39d3a4:
    // 0x39d3a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39d3a8:
    // 0x39d3a8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x39d3a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_39d3ac:
    // 0x39d3ac: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d3b0:
    // 0x39d3b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39d3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39d3b4:
    // 0x39d3b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d3b8:
    // 0x39d3b8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_39d3bc:
    if (ctx->pc == 0x39D3BCu) {
        ctx->pc = 0x39D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3B8u;
        // 0x39d3bc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3C0u;
        goto label_39d3c0;
    }
    ctx->pc = 0x39D3B8u;
    {
        const bool branch_taken_0x39d3b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3B8u;
        // 0x39d3bc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3b8) {
            ctx->pc = 0x39D428u;
            goto label_39d428;
        }
    }
    ctx->pc = 0x39D3C0u;
label_39d3c0:
    // 0x39d3c0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x39d3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39d3c4:
    // 0x39d3c4: 0x0  nop
    ctx->pc = 0x39d3c4u;
    // NOP
label_39d3c8:
    // 0x39d3c8: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x39d3c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39d3cc:
    // 0x39d3cc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x39d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_39d3d0:
    // 0x39d3d0: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x39d3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_39d3d4:
    // 0x39d3d4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d3d8:
    // 0x39d3d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d3dc:
    // 0x39d3dc: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x39d3dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_39d3e0:
    // 0x39d3e0: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x39d3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_39d3e4:
    // 0x39d3e4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39d3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d3e8:
    // 0x39d3e8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d3ec:
    // 0x39d3ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d3f0:
    // 0x39d3f0: 0x94e50008  lhu         $a1, 0x8($a3)
    ctx->pc = 0x39d3f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_39d3f4:
    // 0x39d3f4: 0x9503000a  lhu         $v1, 0xA($t0)
    ctx->pc = 0x39d3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_39d3f8:
    // 0x39d3f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39d3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d3fc:
    // 0x39d3fc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d400:
    // 0x39d400: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d404:
    // 0x39d404: 0x94e5000c  lhu         $a1, 0xC($a3)
    ctx->pc = 0x39d404u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_39d408:
    // 0x39d408: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39d408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39d40c:
    // 0x39d40c: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x39d40cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_39d410:
    // 0x39d410: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39d414:
    // 0x39d414: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x39d414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_39d418:
    // 0x39d418: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39d418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d41c:
    // 0x39d41c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x39d41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_39d420:
    // 0x39d420: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
label_39d424:
    if (ctx->pc == 0x39D424u) {
        ctx->pc = 0x39D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D420u;
        // 0x39d424: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D428u;
        goto label_39d428;
    }
    ctx->pc = 0x39D420u;
    {
        const bool branch_taken_0x39d420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D420u;
        // 0x39d424: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d420) {
            ctx->pc = 0x39D3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d3c8;
        }
    }
    ctx->pc = 0x39D428u;
label_39d428:
    // 0x39d428: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x39d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_39d42c:
    // 0x39d42c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39d430:
    // 0x39d430: 0x40f809  jalr        $v0
label_39d434:
    if (ctx->pc == 0x39D434u) {
        ctx->pc = 0x39D438u;
        goto label_39d438;
    }
    ctx->pc = 0x39D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D438u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D430u, 0x39D438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D438u;
label_39d438:
    // 0x39d438: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x39d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_39d43c:
    // 0x39d43c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x39d43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_39d440:
    // 0x39d440: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_39d444:
    if (ctx->pc == 0x39D444u) {
        ctx->pc = 0x39D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D440u;
        // 0x39d444: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D448u;
        goto label_39d448;
    }
    ctx->pc = 0x39D440u;
    {
        const bool branch_taken_0x39d440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d440) {
            ctx->pc = 0x39D444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D440u;
            // 0x39d444: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D458u;
            goto label_39d458;
        }
    }
    ctx->pc = 0x39D448u;
label_39d448:
    // 0x39d448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d44c:
    // 0x39d44c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39d44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d450:
    // 0x39d450: 0x10000002  b           . + 4 + (0x2 << 2)
label_39d454:
    if (ctx->pc == 0x39D454u) {
        ctx->pc = 0x39D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D450u;
        // 0x39d454: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D458u;
        goto label_39d458;
    }
    ctx->pc = 0x39D450u;
    {
        const bool branch_taken_0x39d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D450u;
        // 0x39d454: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d450) {
            ctx->pc = 0x39D45Cu;
            goto label_39d45c;
        }
    }
    ctx->pc = 0x39D458u;
label_39d458:
    // 0x39d458: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39d458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d45c:
    // 0x39d45c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39d45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d460:
    // 0x39d460: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39d460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d464:
    // 0x39d464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39d464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d468:
    // 0x39d468: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39d468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d46c:
    // 0x39d46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d470:
    // 0x39d470: 0x3e00008  jr          $ra
label_39d474:
    if (ctx->pc == 0x39D474u) {
        ctx->pc = 0x39D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D470u;
        // 0x39d474: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D478u;
        goto label_fallthrough_0x39d470;
    }
    ctx->pc = 0x39D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D470u;
        // 0x39d474: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d470:
    ctx->pc = 0x39D478u;
}
